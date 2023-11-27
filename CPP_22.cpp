#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto value : values) {
        if (auto intValue = boost::any_cast<int>(&value)) {
            result.push_back(*intValue);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    list<boost::any> values = {1, 2, 3, "hello", 4.5};
    vector<int> result = filter_integers(values);
    vector<int> expected = {1, 2, 3};
    if (issame(result, expected)) {
        cout << "Test case passed" << endl;
    } else {
        cout << "Test case failed" << endl;
    }
    return 0;
}