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
	vector<int> int_list;
	for(auto it=values.begin();it!=values.end();++it)
		if(it->type()==typeid(int))
			int_list.push_back(boost::any_cast<int>(*it));
	return int_list;
}
int main(){
	list_any l_any;
	l_any.push_back(1);
	l_any.push_back(2);
	l_any.push_back(3);
	l_any.push_back("abc");
	l_any.push_back(5);
	l_any.push_back(3.14);
	vector<int> int_list=filter_integers(l_any);
	for(auto it=int_list.begin();it!=int_list.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
}
