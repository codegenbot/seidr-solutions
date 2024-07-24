```cpp
#include <algorithm>
#include <string>
#include <vector>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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

std::string reverse_delete(std::string s, std::string c) {
    std::vector<char> temp;
    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp.push_back(ch);
        }
    }
    std::string result;
    for (int i = temp.size() - 1; i >= 0; i--) {
        result += temp[i];
    }
    return result;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "mam"}));
    return 0;
}