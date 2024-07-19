#include <vector>
#include <list>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (const auto &val : values) {
        if (val == 3) {
            result.push_back(val);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3,3,3,3,4,5}), {3, 3, 3}));
    return 0;
}