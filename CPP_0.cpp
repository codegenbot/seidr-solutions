```c
#include <vector>
#include <cmath>

bool has_close_elements(const std::vector<float>& a, float delta) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (std::abs(a[i] - a[i + 1]) <= delta) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a={1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    float input;
    std::cout << "Enter the delta value: ";
    std::cin >> input;
    
    if(has_close_elements(a, input)) {
        std::cout << "The array has close elements.\n";
    } else {
        std::cout << "The array does not have close elements.\n";
    }
    
    return 0;
}