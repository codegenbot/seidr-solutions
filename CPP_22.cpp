#include <vector>
#include <list>
#include <any>
#include <algorithm>

namespace std {
template<typename T>
bool is_same(const list<any>& values) {
    vector<T> result;
    for (const auto& value : values) {
        if (boost::any_cast<T>(value)) {
            result.push_back(boost::any_cast<T>(value));
        }
    }
    return (result == vector<T>(values.begin(), values.end()));
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == vector<int>{3, 3, 3});
    // ...
}