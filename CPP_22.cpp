#include <iostream>
#include <vector>
#include <list>
#include <any>
#include <boost/any.hpp>

using namespace std;
using namespace boost;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    list<any> values = {3, any('c'), 3, 3, any('a'), any('b')};
    assert(issame(filter_integers(values), vector<int>{3, 3, 3}));
    return 0;