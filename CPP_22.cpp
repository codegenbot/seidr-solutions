#include <iostream>
#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;
using boost::any;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 4, 5, 6, 7, 8}), {3, 4, 5, 6, 7, 8}));

    return 0;
}