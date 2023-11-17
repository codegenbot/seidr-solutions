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
	vector<int> v;
	for(list_any::const_iterator it=values.begin();it!=values.end();++it){
		if(any_cast<int>(&(*it))){
			v.push_back(*any_cast<int>(&(*it)));
		}
	}
	return v;
}


int main(){
	list_any values;
	values.push_back(boost::any(1));
	values.push_back(boost::any(2));
	values.push_back(boost::any(3));
	values.push_back(boost::any(3.14));
	values.push_back(boost::any("abc"));
	vector<int> v=filter_integers(values);
	for(vector<int>::const_iterator it=v.begin();it!=v.end();++it){
		cout<<*it<<endl;
	}
}
