#include <vector>
#include <string>

std::vector<int> countEvenOddDigits(int num) {
    std::vector<int> counts(2, 0);
    std::string numStr = std::to_string(abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}

int main() {
    int num = 123456;
    std::vector<int> result = countEvenOddDigits(num);
    std::vector<int> expected = {3, 3};
    
    if (issame(result, expected)) {
        return 0;
    } else {
        return 1;
    }
}