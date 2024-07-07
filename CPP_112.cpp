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

int main() {
    std::vector<std::string> expected = {reverse_delete("mamma", "mia")[0], (reverse_delete("mamma", "mia")[0] == reverse_delete("mamma", "mia")[1]) ? "True" : "False"};
    if (!std::vector<std::string>({expected[0], expected[1]}).operator==({reverse_delete("mamma", "mia")[0], reverse_delete("mamma", "mia")[1]}))
        return 1;
    return 0;
}