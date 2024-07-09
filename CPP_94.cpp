#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst) {
    int sum = 0;
    for (int i : lst) {
        while (i > 0) {
            sum += i % 10;
            i /= 10;
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    int result = skjkasdkd(lst);
    std::cout << "The sum of digits is: " << result << std::endl;
}