#include <string>
#include <stoi>

int digitSum(const std::string& s) {
    int sum = 0;
    for (auto c : s) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    return 0;
}