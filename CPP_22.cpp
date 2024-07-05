#include <iostream>
#include <vector>
#include <list>
#include <typeinfo>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

vector<int> filter_integers(const list<boost::any>& values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}