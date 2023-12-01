#include <vector>
#include <boost/any.hpp>
#include <typeinfo>
#include <list>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (auto it = values.begin(); it != values.end(); ++it) {
        boost::any value = *it;
        if (typeid(value) == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));

    return 0;
}