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
int main(){
	list_any z;
	z.push_back("a");
	z.push_back(3.14);
	z.push_back(5);
	z.push_back(1);
	z.push_back(2);
	z.push_back(3);
	z.push_back("abc");
	z.push_back(4);
	z.push_back(5);
	z.push_back(6);
	vector<int> v=filter_integers(z);
	for(auto x:v){
	cout<<x<<" ";
	}
}
