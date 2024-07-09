```cpp
#include <iostream>
#include <vector>

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int skjkasdkd(std::vector<int> lst) {
    int result = 0;
    for (int num : lst) {
        result += sumDigits(num);
    }
    return result;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    int result = skjkasdkd(lst);
    std::cout << "The sum of digits is: " << result << std::endl;
}