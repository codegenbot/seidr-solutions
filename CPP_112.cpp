```cpp
#include <iostream>
#include <vector>
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
    std::string revTemp = temp;
    std::reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s, c;
    std::cout << "Enter string: ";
    std::cin >> s;
    std::cout << "Enter character to be deleted: ";
    std::cin >> c;
    std::vector<std::string> result = reverse_delete(s, c);
    if (issame(result, {"", "True"})) {
        std::cout << "The reversed string is the same as the original.\n";
    } else {
        std::cout << "The reversed string is not the same as the original.\n";
    }
    return 0;
}