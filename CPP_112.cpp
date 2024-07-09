```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    std::string rev = result;
    std::reverse(rev.begin(), rev.end());
    std::vector<std::string> res;
    res.push_back(result);
    res.push_back(std::to_string(result == rev));
    return res;
}

int main() {
    assert(issame({ "", "True" }, reverse_delete("mamma", "mia")) );
    // ...
}