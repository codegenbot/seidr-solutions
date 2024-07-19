#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main() {
    std::vector<float> positive_numbers;
    // Assuming l is properly defined or provided before this point
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return 0;
}