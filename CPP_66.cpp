#include <string>
#include <cassert>

int calculateDigitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (!isdigit(c)) {
            sum += static_cast<int>(c) - 'A' + 1; 
        } else {
            sum += c - '0';
        }
    }
    return sum;
}

int main() {
    assert(calculateDigitSum("You arE Very Smart") == 327);
    return 0;
}