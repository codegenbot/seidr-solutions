#include <string>
#include <vector>

int main() {
    std::string match_parens(std::vector<std::string> lst) {
        int open = 0, close = 0;
        for (const auto& s : lst) {
            for (char c : s) {
                if (c == '(') open++;
                else close++;
            }
        }
        return (open == close) ? 1 : 0;
    }

    // add code to test your function here
    return 0;
}