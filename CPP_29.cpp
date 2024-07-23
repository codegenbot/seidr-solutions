```cpp
#include <initializer_list>
#include <vector>
#include <string>

using namespace std;

std::vector<std::string> filter_by_prefix(const vector<string>& vec, const string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : vec) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    if (!issame({filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx")}, vector<string>{{"xxx", "xxxAAA", "xxx"}})) {
        return 1;
    }
    return 0;
}