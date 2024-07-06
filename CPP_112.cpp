#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool same(vector<string> v1, vector<string> v2) {
    return v1 == v2;
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
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    result.push_back((temp == rev) ? "True" : "False");
    return result;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    if (!(same({result[0], result[1]}, {"", "True"}))) {
        std::cout << "Test failed." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
    return 0;
}