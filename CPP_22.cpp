#include <vector>
#include <list>
#include <any>
#include <assert.h>

bool issame(vector<int> a, vector<int> b);

vector<any> filter_integers(list<any> values) {
    vector<any> result;
    for (const auto& value : values) {
        if (any_cast<int>(value)) {
            result.push_back(value);
        }
    }
    return any_cast<vector<int>>(result);
}

int main() {
    assert(issame(filter_integers({3, 3, 'c', 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}