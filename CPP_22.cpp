```cpp
#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

bool equals(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(equals(filter_integers({3, boost::any('c'), 3, 3, boost::any('a'), boost::any('b')}), {3, 3, 3}));
    return 0;
}