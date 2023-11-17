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
	vector<int>  l;
	for(auto i:values)
	{
		if(i.type().name()==typeid(int).name())
			l.push_back(boost::any_cast<int&>(i));
	}
	return l;
}

int main()
{
	list_any ls={2,3,4,"abc",{},{}};
	vector<int> l=filter_integers(ls);
	for(auto i:l)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
