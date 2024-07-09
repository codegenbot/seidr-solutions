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
    std::vector<float> vec = {5.2, -3.4, 7.8, 0.9};
    float result = max_element(vec);
    std::cout << "Maximum element: " << result << std::endl;
    return 0;
}