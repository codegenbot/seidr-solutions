#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> x;
    // Read input from user
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        x.push_back(num);
    }

    std::vector<int> result = unique_digits(x);

    // Print the output
    bool issameToResult = true;
    for (int num : x) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            issameToResult = false;
            break;
        }
    }

    std::cout << issameToResult;

    return 0;
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}