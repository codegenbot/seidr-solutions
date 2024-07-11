#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value).type() == typeid(int)) {
            int casted_value = any_cast<int>(value);
            result.push_back(casted_value);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, any(int('c')), 3, 3, any(int('a')), any(int('b'))}), {3, 3, 3}));
    return 0;
}