```
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    int n1,n2;
    std::cin>>n1>>n2;
    if(issame({0}, {0})) {
        std::cout << "The numbers are same." << std::endl;
    } else {
        std::vector<int> x = {n1, n2};
        std::vector<int> y = unique_digits(x);
        for (int i : y) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
    return 0;
}

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}