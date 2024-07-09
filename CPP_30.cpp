#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(get_positive({}) == {});
    std::vector<float> vec = {1.5, -2.8, 3.9};
    std::vector<float> positive = get_positive(vec);
    if (!issame(positive, std::vector<float>({1.5, 3.9}))) {
        std::cout << "Positive numbers: ";
        for (float num : positive) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No positive numbers found" << std::endl;
    }
    return 0;
}