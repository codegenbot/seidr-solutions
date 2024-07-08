#include <vector>
#include <string>

bool issame(vector<vector<string>> a) {
    if (a.empty()) {
        return true;
    }
    for (const auto& vec : a) {
        if (!issame({vec}) || vec.size() != a.size()) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({{"W"}, {"W", "WW"}, {"W", "WW", "WWW"}}));
    return 0;
}