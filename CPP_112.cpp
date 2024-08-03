```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

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
    std::string reversed = temp;
    std::reverse(reversed.begin(), reversed.end());
    result.push_back((temp == reversed) ? "True" : "False");
    return result;
}

int main() {
    assert(issame(vector<string>(reverse_delete("mamma", "mia") ) , vector<string> { "", "True"}));
    return 0;
}