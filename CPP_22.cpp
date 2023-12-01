#include <cassert>
#include <list>
#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <algorithm>

using namespace std;

vector<int> filter_integers(const list<boost::any>& values) {
    vector<int> result;
    for (auto value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}