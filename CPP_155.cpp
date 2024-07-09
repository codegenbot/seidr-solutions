#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0 || num == -1) {
        int digit = (num % 10);
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        if (num > 0)
            num /= 10;
        else if (num < 0) {
            num /= 10;
            ((result[0] += 1), (result[1] += 1));
        }
    }
    return result;
}

int main() {
    std::cout << "Number of even and odd digits: ";
    int n = -1; // default input
    while (n != 0) {
        std::cin >> n;
        std::vector<int> temp = count(n);
        if (!isSame({1, 0}, temp))
            std::cout << "Number of even and odd digits: " << temp[0] << " " << temp[1] << std::endl;
    }
    return 0;
}