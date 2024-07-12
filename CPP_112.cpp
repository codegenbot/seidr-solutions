#include <algorithm>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a) {
    if (a.empty()) {
        return true;
    }
    for (const auto& str : a) {
        if (!str.empty() && *std::next(a.begin(), 0) != str) {
            return false;
        }
    }
    return true;
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
    if (temp == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::cin >> s;

    std::cout << "Enter a character to be deleted: ";
    std::string c;
    std::cin >> c;

    std::vector<std::string> result = reverse_delete(s, c);
    for (const auto& str : result) {
        std::cout << str << std::endl;
    }
    
    return 0;
}