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
    std::vector<float> numbers = {1, 2, 3, -4, 5};
    float maximum = max_element(numbers);
    printf("The maximum number is %.2f\n", maximum);
    return 0;
}