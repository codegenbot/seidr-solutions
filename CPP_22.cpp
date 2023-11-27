#include <iostream>
#include <boost/any.hpp>
#include <list>
#include <vector>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (boost::any_cast<int>(&value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(int a, int b) {
    return a == b;
}

int main() {
    list<boost::any> values{1, 2, 3, "four", 5, 6.7};
    vector<int> integers = filter_integers(values);
    for (auto integer : integers) {
        cout << integer << " ";
    }
    cout << endl;
    cout << issame(10, 10) << endl;
    return 0;
}