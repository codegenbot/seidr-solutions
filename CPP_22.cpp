/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
	vector<int> res;
	for (auto iter = values.begin(); iter != values.end(); ++iter)
	{
		try
		{
			int tmp = boost::any_cast<int>(*iter);
			res.push_back(tmp);
		}
		catch (boost::bad_any_cast& e)
		{
		}
	}
	return res;
}
