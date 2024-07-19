#include <boost/any.hpp>
#include <vector>
#include <list>

using namespace boost;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}

bool operator==(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(filter_integers({3, any('c'), 3, 3, any('a'), any('b')}) == vector<int>({3, 3, 3}));
    return 0;
}