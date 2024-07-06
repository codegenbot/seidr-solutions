#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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
    result.push_back(rev == temp ? rev : temp);
    return result;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    if (!(result == std::vector<std::string> { "", "amma" })) {
        std::cout << "Test failed." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
    return 0;
}