#include <vector>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

int main() {
    int inputNum;
    std::cout << "Enter a number: ";
    std::cin >> inputNum;

    std::vector<int> result = even_odd_count(inputNum);

    if (result[0] == 0) {
        std::cout << "Odd numbers are counted.\n";
    } else {
        std::cout << "Even numbers are counted.\n";
    }

    return 0;
}