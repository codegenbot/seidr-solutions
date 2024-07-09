#include <vector>
#include <string>

int main() {
    std::vector<std::string> lst;
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close);
}