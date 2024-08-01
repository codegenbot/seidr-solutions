#include <vector>
#include <iostream>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int solve_problem() {
    std::vector<float> vec1, vec2;

    // Read input vectors
    float num;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    // Check if vectors are the same
    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    return 0;
}

int main() {
    return solve_problem();
}