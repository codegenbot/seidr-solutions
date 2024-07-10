#include <cassert>
#include <string>

int solve(std::string& color) {
    int result = 0;
    for (size_t i = 1; i < color.size(); ++i) {
        if (!std::isdigit(color[i])) {
            result++;
        }
    }
    return result;

}

int main() {
    assert(solve("#ccc") == 3);
    return 0;
}