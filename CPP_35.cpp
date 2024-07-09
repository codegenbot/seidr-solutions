#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return abs(max);
}

int main() {
    std::vector<float> numbers = {10.5, -2.8, 3.7, 9.1};
    float result = max_element(numbers);
    std::cout << "The maximum number is: " << result << std::endl;
    return 0;
}