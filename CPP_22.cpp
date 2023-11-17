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
	for (auto it = values.begin(); it != values.end(); ++it) {
		if (it->type() == typeid(int)) {
			result.push_back(boost::any_cast<int>(*it));
		}
	}
	return result;
}

int main() {
	vector<int> v1 = { 1, 2, 3, 4, 5 };
	vector<int> v2 = { 1, 2, 3, 4, 5 };
	vector<int> v3 = { 1, 2, 3, 4, 5 };
	vector<int> v4 = { 1, 2, 3, 4, 5 };
	vector<int> v5 = { 1, 2, 3, 4, 5 };
	list_any l1 = { v1, v2, v3, v4, v5 };
	vector<int> v6 = filter_integers(l1);
	for (auto it = v6.begin(); it != v6.end(); ++it) {
		cout << *it << endl;
	}
	return 0;
}
