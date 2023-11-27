#include <iostream>
#include <list>
#include <boost/any.hpp>
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

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    list<boost::any> values = {1, 2, 3, "four", 5.5, 6};
    vector<int> expected_result = {1, 2, 3, 6};
    vector<int> result = filter_integers(values);

    if (issame(result, expected_result)) {
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }

    return 0;
}