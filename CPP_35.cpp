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
    std::vector<float> numbers = {10.5, -3.8, 2.9, 7.1};
    float maximum = max_element(numbers);
    std::cout << "The maximum number is: " << maximum << std::endl;
    return 0;
}