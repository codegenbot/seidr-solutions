#include <vector>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int get_positive() {
    int num;
    std::cin >> num;
    while (num <= 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    }
    return num;
}

int main() {
    std::vector<float> vec1, vec2;

    // Read input vectors
    int n = get_positive();
    float num;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }
    
    n = get_positive();
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    // Check if vectors are the same
    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}