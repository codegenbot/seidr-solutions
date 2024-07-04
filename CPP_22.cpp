#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    list<boost::any> input = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filter_integers(input), {3, 3, 3}));
    cout << "Test passed" << endl;
    return 0;
}