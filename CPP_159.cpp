#include <iostream>
#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    std::vector<int> result;
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    result.push_back(totalEaten);
    result.push_back(left);
    return result;
}

int main() {
    std::vector<int> output = eat(4, 5, 1);
    std::cout << output[0] << " " << output[1] << std::endl;
    return 0;
}