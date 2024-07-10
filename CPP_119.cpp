#include <string>
#include <vector>

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
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, s);
        input.push_back(s);
    }
    std::cout << match_parens(input) << std::endl;
    return 0;
}