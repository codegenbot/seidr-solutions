#include <vector>
namespace std {
template <class _Ty>
struct vector<_Ty>::size_type { };
}

using namespace std;

vector<string> reverse_delete(vector<string>& v1, vector<string>& v2) {
    vector<string> result;
    int minLength = min(v1.size(), v2.size());
    for (int i = 0; i < minLength; ++i) {
        if (!v1[i].empty() || !v2[i].empty()) {
            result.push_back((v1[i] + " " + v2[i]).empty() ? "" : (v1[i] + " " + v2[i]));
        } else {
            result.push_back("");
        }
    }
    return result;
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
    v = reverse_delete(temp, v);
    vector<string> result = {{"", "True"}};
    assert(issame(result, v));
    return 0;
}