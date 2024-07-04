#include <iostream>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <cassert>

using list_any = std::vector<boost::any>;
using namespace std;

vector<int> filter_integers(list_any values) {
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
    assert (issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}