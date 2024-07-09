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
    std::vector<float> v = {4.2, 5.8, -3.7, 0.9};
    float result = max_element(v);
    std::cout << "Maximum element: " << result << std::endl;
    return 0;
}