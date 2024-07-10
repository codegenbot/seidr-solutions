```cpp
#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<float>& v, float threshold) {
    for(int i=0; i<v.size()-1; ++i) {
        if(std::abs(v[i] - v[i+1]) <= threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a={1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    bool result = has_close_elements(a, 0.1);
    if(result) {
        for(float num : a) {
            std::cout << num << " ";
        }
        std::cout << "\nClose elements detected.\n";
    } else {
        for(float num : a) {
            std::cout << num << " ";
        }
        std::cout << "\nNo close elements detected.\n";
    }
}