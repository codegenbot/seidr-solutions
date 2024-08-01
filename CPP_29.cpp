#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    for (const auto& s : a) {
        if (std::find(b.begin(), b.end(), s) == b.end()) return false;
    }
    return true;
}

int main() {
    assert(issame({{"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}}, {"xxx", "xxxAAA", "xxx"}) == true);
    return 0;
}