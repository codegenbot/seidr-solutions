#include <vector>
namespace std {
template <class _Ty>
struct vector<_Ty>::size_type { };
}

using namespace std;

void reverse_delete(vector<string>& v) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if (!v[i].empty()) {
            v.erase(v.begin() + i);
            break;
        }
    }
}

bool issame(vector<string> b, vector<string> a) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    vector<string> result = reverse_delete(vector<string>({"mamma", "mia"}));
    assert(issame(result, {"", "True"}));
    return 0;
}