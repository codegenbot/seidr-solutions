#include <string>
#include <vector>

int main() {
    std::vector<std::string> lst;
    string match_parens(vector<string> lst) {
        int open = 0, close = 0;
        for (const auto& s : lst) {
            for (char c : s) {
                if (c == '(') open++;
                else close++;
            }
        }
        return (open == close) ? "Yes" : "No";
    }

    // example usage
    lst.push_back("(");
    lst.push_back(")");
    std::cout << match_parens(lst) << std::endl;

    return 0;
}