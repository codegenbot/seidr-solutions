```cpp
#include <iostream>
#include <vector>
#include <string>

int match_parens(std::vector<std::string> lst) {
    int countOpen = 0, countClose = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else countClose++;
        }
    }

    if (countOpen == countClose) return 1;
    else return 0;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> vec;
    for(int i = 0; i < n; i++) {
        std::string temp;
        std::cin >> temp;
        vec.push_back(temp);
    }
    
    if(match_parens(vec) == 1)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}