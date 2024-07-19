#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float i : l) {
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> input;
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    std::cout << "Positive numbers: ";
    for(float i : get_positive(input)) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}