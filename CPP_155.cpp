#include <vector>
#include <iostream>

bool same = (even_odd_count(0) == {1, 0});

int main() {
    std::vector<int> result;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    result = even_odd_count(num);
    if (same)
        std::cout << "Number of even and odd digits are same.\n";
    else
        std::cout << "Number of even and odd digits are not the same.\n";
    
    return 0;
}

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