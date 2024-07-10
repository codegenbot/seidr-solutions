#include <string>
#include <vector>

std::string match_parens(std::vector<const char*> lst) {
    int open = 0, close = 0;
    for (const char* s : lst) {
        for (char c : std::string(s)) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    assert(match_parens({"("}, {")"}}) == "Yes");
    return 0;
}