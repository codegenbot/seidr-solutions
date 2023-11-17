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
vector<int> result;
for(auto i:values)
{
	try{
		result.push_back(boost::any_cast<int>(i));
	}
	catch(boost::bad_any_cast e){
	}
}
return result;
}
int main(){
	list_any v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back("abc");
	v.push_back(4);
	v.push_back("abc");
	v.push_back(5);
	v.push_back(6);
	vector<int> result=filter_integers(v);
	for(auto i:result)
	{
		cout<<i<<"\n";
	}
}
