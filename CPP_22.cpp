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

	vector<int> list;
	for(list_any::iterator i=values.begin();i!=values.end();i++){
		if(i->type() == typeid(int)){
			list.push_back(boost::any_cast<int>(*i));
		}
	}
	return list;
}
