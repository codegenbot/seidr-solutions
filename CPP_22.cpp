/*
Filter given vector of any python values only for integers
>>> filter_integers({"a", 3.14, 5})
{5}
>>> filter_integers({1, 2, 3, "abc", {}, {}})
{1, 2, 3}
*/
#include <list>
#include<stdio.h>
#include<vector>
#include<string>
#include<boost/any.hpp>
#include<algorithm>
typedef std::list<boost::any> list_any;
using namespace std;

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (boost::any& x : values) {
        if (x.type() == typeid(int) ) {
            result.push_back(boost::any_cast<int>(x));
        }
    }
    return result;
}

int main ()
{
    list_any values;
    values = {1, 2, 3,"abc", 3.14, -1, -4, 8, 9};
    vector<int> res;
    res = filter_integers(values);
    
   for_each (res.begin(), res.end(), [](int d){printf ("%d ",d);});
   return 0;
}
