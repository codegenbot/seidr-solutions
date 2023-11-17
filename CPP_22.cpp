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
	for(auto i=values.begin();i!=values.end();i++)
	{
		try
		{
			int temp=boost::any_cast<int>(*i);
			v.push_back(temp);
		}
		catch(boost::bad_any_cast& e)
		{
			cout<<"Not an integer"<<endl;
		}
	}
	return v;
}
int main()
{
	list_any values;
	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	values.push_back(4);
	values.push_back("abc");
	values.push_back("def");
	values.push_back(5);
	values.push_back(6);
	values.push_back(7);
	values.push_back(8);
	values.push_back("ghi");
	values.push_back("jkl");
	values.push_back(9);
	values.push_back(10);
	vector<int> v=filter_integers(values);
	cout<<"The filtered integer values are: "<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
