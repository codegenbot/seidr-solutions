#include <iostream>
#include <vector>
#include <algorithm>

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
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, (reversed == result ? "True" : "False")};
}

bool is_same(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s, c;
    std::cout << "Enter the string: ";
    std::cin >> s;
    std::cout << "Enter the character: ";
    std::cin >> c;
    std::vector<std::string> result = reverse_delete(s, c);
    if(is_same(result, {"Hello", "olleH"})) {
        std::cout << "The output is correct." << std::endl;
    } else {
        std::cout << "The output is incorrect." << std::endl;
    }
    return 0;
}