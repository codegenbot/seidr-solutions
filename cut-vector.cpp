#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int num;
    while (std::cin >> num) {
        if (num > 0) {
            vec.push_back(num);
        }
    }

    int cutIndex = 0;
    int n = vec.size();
    std::cout << cutIndex + 1 << std::endl << n - cutIndex << std::endl;

    return 0;
}