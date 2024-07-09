```cpp
#include <vector>
#include <algorithm>

bool issame(float f1, float f2) {
    if (std::abs(f1 - f2) < 0.00001)
        return true;
    else
        return false;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::vector<float> num_list = {1.0, -2.0, 3.0, -4.0};
    std::vector<float> positive_nums = get_positive(num_list);
    
    for (float f : positive_numbers) {
        if (!issame(f, 0.0)) {
            std::cout << "Positive number: " << f << std::endl;
        }
    }
    return 0;
}