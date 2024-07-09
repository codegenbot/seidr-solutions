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
    std::vector<float> myVector = {2.5, -3.0, 10.0, 8.0};
    float largest = max_element(myVector);
    printf("The largest number is %f\n", largest);
    return 0;
}