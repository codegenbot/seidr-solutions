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
    std::vector<float> numbers = {3.5, 9.2, -0.6};
    float maximum = max_element(numbers);
    std::cout << "The maximum number is: " << maximum << std::endl;
    return 0;
}