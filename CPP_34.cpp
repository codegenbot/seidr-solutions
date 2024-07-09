#include <algorithm>
#include <vector>
#include <iostream>

auto unique_end = std::unique(input.begin(), input.end());
std::vector<int> output(input.begin(), unique_end);
std::sort(output.begin(), output.end());
for (int i : output) {
    std::cout << i << " ";
}