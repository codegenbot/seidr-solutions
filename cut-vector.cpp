#include <iostream>
int cutIndex = n / 2;
for (int i = 0; i <= cutIndex; i++) std::cout << nums[i] << " ";
std::cout << std::endl;
for (int i = cutIndex + 1; i < n; i++) std::cout << nums[i] << " ";
std::cout << std::endl;