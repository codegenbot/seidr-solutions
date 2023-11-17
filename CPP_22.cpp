/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<string>
#include<vector>
#include<list>
#include<boost/any.hpp> 
using namespace std;
vector<int> filter_integers(vector<boost::any> values)
{
    vector<int> integer_list = {};
    for (auto i = values.begin(); i != values.end(); i++)
    {
        try
        {
            integer_list.push_back(boost::any_cast<int>(*i)); 
        }
        catch(boost::bad_any_cast &e)
        {
            continue;
        }
    }
    return integer_list;
}
