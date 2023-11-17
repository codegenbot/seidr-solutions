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
    vector<int> filtered;
    for (auto i = values.begin(); i != values.end(); ++i) {
        if (i->type() == typeid(int)) {
            filtered.push_back(boost::any_cast<int>(*i));
        }
    }
    return filtered;
}

int main() {
    list_any values = {1, 2, 3, "abc", {}, {}};
    vector<int> filtered = filter_integers(values);
    for (auto i = filtered.begin(); i != filtered.end(); ++i) {
        cout << *i << endl;
    }
}
