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
    std::vector<float> v = {1.2, 3.4, -5.6, 7.8};
    float result = max_element(v);
    std::cout << "The maximum element is: " << result << std::endl;
    return 0;
}