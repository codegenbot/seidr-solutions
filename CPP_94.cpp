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
    assert(skkasdkd(lst) == 10);
    return 0;
}