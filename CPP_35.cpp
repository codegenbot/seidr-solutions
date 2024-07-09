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
    std::vector<float> vec = {1.2, -3.4, 5.6};
    float max_val = max_element(vec);
    std::cout << "Maximum value is: " << max_val << std::endl;
    return 0;
}