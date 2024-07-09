```
#include <iostream>
#include <vector>

int skjkasdkd(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        while(num > 0) {
            sum += num % 10;
            num /= 10;
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    int result = skjkasdkd(lst);
    std::cout << "The sum of digits is: " << result << std::endl;
}