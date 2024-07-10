#include <cassert>
#include <string>

int solve(std::string& color) {
    int result = 0;
    for (char c : color) {
        if (!std::isdigit(c)) {
            result++;
        }
    }
    return result;

}

int main() {
    assert(std::string("#CCC").find_first_not_of("0123456789") == std::string("#CCC").size() - 3);
    return 0;
}