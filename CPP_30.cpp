#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] - b[i]) > 1e-9 || (b[i] - a[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

float get_positive(std::vector<float> l) {
    float sum = 0.0f;
    for (float x : l) {
        if (x > 0) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<float> numbers(n);
    for(int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    if(issame(numbers, {1.0f})) {
        float sum = get_positive(numbers);
        std::cout << "Yes " << sum << "\n";
    } else {
        std::cout << "No\n";
    }
    
    return 0;
}