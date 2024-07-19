```cpp
#include <algorithm>
#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::string result;
std::string temp = "";
for (char ch : "mamma") {
    bool found = false;
    for (char cc : "mia") {
        if (ch == cc) {
            found = true;
            break;
        }
    }
    if (!found) {
        temp += ch;
    }
}
std::string revTemp = temp;
std::reverse(revTemp.begin(), revTemp.end());
result = revTemp == temp ? "True" : "False";
std::cout << result << std::endl;