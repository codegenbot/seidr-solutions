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
    assert(solve("#ccc") == 3);
    return 0;
}