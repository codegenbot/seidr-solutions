#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a == b);
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

int main() {
    std::vector<int> result = even_odd_count(12345);
    for (int x : result) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}