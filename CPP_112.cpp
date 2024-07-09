#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

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

int main() {
    std::string str1 = "hello";
    std::string str2 = "olleh";
    bool b = issame(str1, str2);
    if(b) {
        std::cout << "Strings are same." << std::endl;
    } else {
        std::cout << "Strings are not same." << std::endl;
    }
    
    std::vector<std::string> res = reverse_delete("hello", "o");
    for(auto s : res) {
        std::cout << s << std::endl;
    }
    return 0;
}