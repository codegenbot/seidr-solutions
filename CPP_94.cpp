#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int n;
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> n;
        if (n == -1) break;
        lst.push_back(n);
    }
    std::cout << "The sum of the digits of the maximum prime in the list is: " << skjkasdkd(lst) << std::endl;
    return 0;
}