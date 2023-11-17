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
	for(auto &i:values){
		try{
			int a=boost::any_cast<int>(i);
			v.push_back(a);
		}catch(boost::bad_any_cast){
			continue;
		}
	}
	return v;
}
int main(){
	list_any values;
	values.push_back("a");
	values.push_back(3.14);
	values.push_back(5);
	vector<int> v=filter_integers(values);
	for(auto &i:v){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
