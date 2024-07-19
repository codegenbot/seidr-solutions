#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    int result = skjkasdkd(lst);
    std::cout << "The sum of digits of the maximum prime is: " << result << std::endl;
    return 0;
}