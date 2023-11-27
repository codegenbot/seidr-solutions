#include <iostream>
#include <list>
#include <vector>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value) != nullptr) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b) {
    return a == b;
}

int main() {
    list<boost::any> values;
    values.push_back(10);
    values.push_back(3.14);
    values.push_back(20);
    values.push_back("hello");

    vector<int> filtered = filter_integers(values);

    for (auto num : filtered) {
        cout << num << " ";
    }
    cout << endl;

    cout << issame(10, 20) << endl;

    return 0;
}