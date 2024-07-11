#include <vector>
#include <list>
#include <any>
#include <assert.h>

bool issame(vector<int> a, vector<int> b);

vector<any> filter_integers(list<any> values) {
    vector<any> result;
    for (const auto& value : values) {
        any_cast<int>(value);
        if (any_cast<int>(value)) {
            result.push_back(any_cast<any>(static_cast<int>(value)));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}