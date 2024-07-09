```cpp
#include <vector>
#include <iostream>

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for(float num : l){
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    std::vector<float> input;
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    std::vector<float> result = get_positive(input);
    return 0;
}