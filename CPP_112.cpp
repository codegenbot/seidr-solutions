```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    std::cout << "[Output] ";
    std::string str, ch;
    std::cin >> str >> ch;

    std::vector<std::string> output = reverse_delete(str, ch);
    for (const auto& o : output) {
        std::cout << o << " ";
    }
    std::cout << std::endl;
    
    return 0;
}