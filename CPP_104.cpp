```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x(n);
    for (auto &i : x) {
        cin >> i;
    }
    std::vector<int> result = unique_digits(x);
    for (const auto &i : result) {
        cout << i << " ";
    }
    return 0;
}

std::vector<int> unique_digits(std::vector<int> x) {
    vector<int> result;
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
    sort(result.begin(), result.end());
    return result;
}