#include <iostream>
#include <vector>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    // Get the input from user
    float num;
    while(std::cin >> num){
        input.push_back(num);
    }

    std::vector<float> positive = get_positive(input);

    for (float i : positive) {
        std::cout << i << " ";
    }
    return 0;
}