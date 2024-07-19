#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {1.2, -3.4, 5.6, -7.8};
    std::vector<float> output = get_positive(input);

    for(float i : output) {
        std::cout << i << " ";
    }
    return 0;
}