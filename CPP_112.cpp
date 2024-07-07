```cpp
#include <vector>
using namespace std;
namespace std {
template <class _Ty>
struct vector<_Ty>::size_type { };
}

void reverse_delete(std::vector<std::string>& v) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if (!v[i].empty()) {
            v.erase(v.begin() + i);
            break;
        }
    }
}

bool issame(std::vector<std::string> b, std::vector<std::string> a) {
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