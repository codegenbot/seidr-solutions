```
#include <vector>
#include <cmath>

float max_element(const std::vector<float>& l){
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main() {
    std::vector<float> numbers = {4.5, -2.8, 7.9, 0.3};
    float result = max_element(numbers);
    std::cout << "The maximum element is: " << result << std::endl;
    return 0;
}