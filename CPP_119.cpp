#include <vector>
#include <string>

bool check_match(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (auto c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;

}

int main() {
    std::vector<std::string> lst = {")", "("};
    assert(check_match(lst));
}