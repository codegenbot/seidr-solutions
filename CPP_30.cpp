#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

int main() {
    std::vector<float> input_numbers; // Define or provide input numbers
    std::vector<float> positive_numbers = get_positive(input_numbers);
    
    return 0;
}