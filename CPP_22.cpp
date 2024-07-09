```
#include <vector>
#include <list>
#include <any>
#include <assert.h>

using namespace std;

bool issame(const any& a, const any& b) {
    return typeid(any_cast<any>(a)) == typeid(any_cast<any>(b));
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(any_cast<int>(value));
        }
    }
    return static_cast<vector<int>>(result);
}

int main() {
    assert(is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'}), vector<int> {3, 3, 3}));
}