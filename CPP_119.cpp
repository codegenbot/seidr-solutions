#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int open = 0, close = 0;
    for (const std::string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    assert(match_parens({")", "("}) == "Yes");
    std::vector<std::string> input;
    std::cout << "Enter the strings: ";
    for(int i = 0; i < 3; ++i) {
        std::string str;
        std::cin >> str;
        input.push_back(str);
    }
    std::cout << match_parens(input) << std::endl;
    return 0;
}