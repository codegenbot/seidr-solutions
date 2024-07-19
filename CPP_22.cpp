#include <vector>
#include <list>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for (const auto &val : values) {
        result.push_back(val);
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