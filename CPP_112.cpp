```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

bool issame(const std::vector<std::string>& a) {
    return a.size() == 2 && (a[0] == "" && a[1] == "True") || a.size() == 2 && (a[0] == "True" && a[1] == "");
}

int main() {
    if (!issame(reverse_delete("mamma", "mia")))
        return 1;
    return 0;
}