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
    std::vector<float> v = {5.2, 10.3, -2.7, 11.8};
    float result = max_element(v);
    std::cout << "The maximum element is: " << abs(result) << std::endl;
    return 0;
}