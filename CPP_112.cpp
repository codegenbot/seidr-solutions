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

bool is_same(std::vector<std::string> v) {
    if(v.size() < 2)
        return true;
    for(int i=0; i<v.size()-1; i++) {
        if(v[i] != v[i+1])
            return false;
    }
    return true;
}

int main() {
    std::string str, ch;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a character: ";
    std::getline(std::cin, ch);
    std::vector<std::string> result = reverse_delete(str, ch);
    if(is_same({result[0], result[1]}))
        std::cout << "The strings are the same.\n";
    else
        std::cout << "The strings are not the same.\n";
    return 0;
}