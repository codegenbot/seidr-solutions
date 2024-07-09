```
#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> count(int num) {
    std::vector<int> result(2, 0);
    while (num > 0 || num == 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        if (num > 0) num /= 10;
        else break;
    }
    return result;
}

int main() {
    std::vector<int> v = count(123456);
    for (int i : v) std::cout << i << " ";
    return 0;
}