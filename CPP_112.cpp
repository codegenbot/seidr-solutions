```
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

bool isSame(std::vector<std::string> v1, std::vector<std::string> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    std::string str, ch;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    std::vector<std::string> output = reverse_delete(str, ch);
    if(isSame({str}, {output[0] + output[1]}) ) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}