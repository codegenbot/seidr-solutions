#include <vector>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for (int i = a; i <= b; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(generate_integers(17, 89), {}));
}