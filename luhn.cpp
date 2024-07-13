```cpp
#include <vector>
#include <iostream>

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += i;
            doubleNext = true;
        }
    }

    return sum;
}

int main() {
    vector<int> digits = {3, 4, 5, 9, 7, 8, 6, 0, 0, 4, 5, 3, 2, 1, 8};
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}