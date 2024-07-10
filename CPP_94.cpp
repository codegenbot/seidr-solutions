#include <vector>
#include <iostream>

int skjkasdkd(std::vector<int> lst) {
    int sum = 0;
    for(int i : lst)
        sum += i;
    return sum;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    int result = skjkasdkd(lst);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}