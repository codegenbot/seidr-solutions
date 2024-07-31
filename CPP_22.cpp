#include <vector>
#include <list>
#include <any>
#include <cassert>

vector<int> filter_integers(list<any> values);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(any_cast<int>(val));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({any(3), any('c'), any(3), any(3), any('a'), any('b')}), {3, 3, 3}));
    return 0;
}