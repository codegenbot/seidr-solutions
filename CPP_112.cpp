#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool compareVectors(std::vector<std::string> v1, std::vector<std::string> v2) {
    return (v1.size() == v2.size()) && std::equal(v1.begin(), v1.end(), v2.begin());
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b) { 
    bool result = compareVectors(a, b);
    if(result) {
        for(auto s : a) {
            std::cout << s << " ";
        }
        std::cout << std::endl;
        for(auto s : b) {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
    return result;
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
    result.push_back({temp});
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    isSame({ "", "True" }, result);
    if (!compareVectors({ "", "True" }, result)) {
        std::cout << "Test failed." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }
    return 0;
}