/*
Filter given vector of any python values only for integers
>>> print filter_integers({"a", 3.14, 5})
{5}
>>> print filter_integers({1, 2, 3, "abc", {}, {}})
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
	vector<int> v;
	for(int i=0;i<values.size();i++){
		if(type(values[i])== ){
			v.pushback(values[i]);
		}
	}
	return v;
}
