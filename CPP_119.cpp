#include <string>
#include <vector>

int main() {
    std::vector<std::string> lst;
    std::cout << "Enter strings (enter 'stop' to finish):" << std::endl;
    while (true) {
        std::string s;
        std::cin >> s;
        if (s == "stop") break;
        lst.push_back(s);
    }
    
    int open = 0, close = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    
    std::cout << (open == close ? "Yes" : "No") << std::endl;
}