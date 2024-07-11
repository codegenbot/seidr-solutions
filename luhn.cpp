```cpp
#include <vector>
#include <cstdint>

int luhn(std::vector<int16_t> cc) {
    int sum = 0;
    for (int i = 0; i < cc.size(); ++i) {
        int digit = cc[i] * (i % 2 ? 1 : 2);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }

    return sum;

}

int main() {
    std::vector<int16_t> cc = {4, 5, 2, 7, 1, 3, 9, 0, 8, 6, 7, 1, 1, 9, 3, 5};
    int result = luhn(cc);
    std::cout << "Result: " << result << std::endl;
    return 0;
}