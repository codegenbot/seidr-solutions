#include <iostream>

int cutIndex;
std::cin >> cutIndex;

for (int i = 0; i <= cutIndex; i++) {
    std::cout << nums[i] << ' ';
}
std::cout << '\n';

for (int i = cutIndex + 1; i < n; i++) {
    std::cout << nums[i] << ' ';
}