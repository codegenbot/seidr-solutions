#include <boost/any.hpp>
#include <vector>
#include <list>
#include <cassert>

bool issame(vector<int> a,vector<int>b) {
    return (a == b);
}

int main() {
    assert(isSameEqual(filter_integers({3, 3, 3}), vector<int>({3, 3, 3})));
    return 0;
}

vector<any> list_any = {1,2,3};
vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).good()) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;
}