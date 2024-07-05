#include <iostream>
#include <vector>
#include <list>
#include <typeinfo>
#include <cassert>
#include <boost/any.hpp>

using namespace std;

typedef boost::any list_any;

vector<int> filter_integers(list<list_any> values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({list_any(3), list_any('c'), list_any(3), list_any(3), list_any('a'), list_any('b')}), {3, 3, 3}));
    cout << "Test passed!" << endl;
    return 0;
}