#include <vector>
namespace std {
template <class _Ty>
struct vector<_Ty>::size_type { };
}

using namespace std;

vector<string> reverse_delete(vector<string>& v) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if (!v[i].empty()) {
            break;
        }
        v.erase(v.begin() + i);
    }
    return v;
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

int mainFunction() {
    vector<string> v = {"mamma", "mia"};
    vector<string> temp = {"mamma", "mia"};
    v = reverse_delete(temp);
    vector<string> result = {{"", "True"}};
    assert(issame(result, v));
    return 0;
}