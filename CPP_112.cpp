#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return {"False"};
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return {"False"};
    }
    return {"True"};
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
    std::string revTemp = temp;
    std::reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s; std::cin >> s;
    std::cout << "Enter another string to compare with the first one: ";
    std::string c; std::cin >> c;
    std::vector<std::string> result = reverse_delete(s, c);
    std::vector<std::string> same_result = issame(result, {"True", "False"});
    if (same_result[0] == "True") {
        for (int i = 0; i < result.size(); i++) {
            std::cout << result[i] << " ";
        }
        std::cout << "\n";
    } else {
        for (int i = 1; i < same_result.size(); i++) {
            std::cout << same_result[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}