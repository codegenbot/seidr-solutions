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
vector<int> filter_integers(list_any values)
{
	vector<int> v;
	for(auto i:values)
	{
		try
		{
			int x=boost::any_cast<int>(i);
			v.push_back(x);
		}
		catch(const boost::bad_any_cast& e)
		{
			
		}
	}
	return v;
}
int main()
{
	list_any l;
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	l.push_back(8);
	l.push_back("abc");
	l.push_back(9);
	l.push_back(10);
	vector<int> v=filter_integers(l);
	for(auto i:v)
	{
		cout<<i<<" ";
	}
	return 0;
}
