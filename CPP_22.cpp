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
#include<boost/any.cpp>
#include<list>
typedef std::list<boost::any> list_any;
using namespace std;
vector<int> filter_integers(list_any values){
	vector<int> v;
	for (auto it = values.begin(); it != values.end(); it++) {
		try {
			boost::any_cast<int>(*it);
			v.push_back(boost::any_cast<int>(*it));
		}
		catch (...) {
			continue;
		}
	}
	return v;
}

int main() {
	list_any l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	l.push_back(3.14);
	l.push_back("abc");
	l.push_back(NULL);
	l.push_back(vector<int>{1, 2, 3});
	l.push_back(list<int>{1, 2, 3});
	vector<int> v = filter_integers(l);
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	getchar();
	return 0;
}
