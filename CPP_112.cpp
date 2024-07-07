#include <vector>
#include <string>

using namespace std;

namespace std {
template <class _Ty>
struct vector<_Ty>::size_type { };
}

vector<string> reverse_delete(const vector<string>& v) {
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
        if (a.at(i) != b.at(i)) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> v1 = {"mamma"};
    vector<string> result1 = reverse_delete(v1);
    
    assert(issame(vector<string>({"" , "True" }), result1));
    
    vector<string> v2 = {"mia"};
    vector<string> result2 = reverse_delete(v2);
    
    assert(issame(vector<string>({"True"}), result2));
    
    return 0;
}