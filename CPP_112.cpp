#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, (result == reverse_result) ? "True" : "False"};
}

int main() {
    std::string input1, input2;
    std::cin >> input1 >> input2;

    std::vector<std::string> vec1 = {input1};
    std::vector<std::string> vec2 = {input2};

    bool areSame = issame(vec1, vec2);
    std::vector<std::string> result = reverse_delete(input1, input2);

    std::cout << "Issame result: " << (areSame ? "True" : "False") << std::endl;
    for (const auto &res : result) {
        std::cout << res << std::endl;
    }

    return 0;
}