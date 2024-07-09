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
    std::vector<float> numbers = {10.5, -20.2, 30.9, -4.1};
    float max_value = max_element(numbers);
    std::cout << "The maximum value is: " << abs(max_value) << std::endl;
    return 0;
}