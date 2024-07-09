#include <iostream>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float i : l) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    std::cout << "Input numbers (separated by spaces): ";
    float x, y;
    int n = 0;
    while(std::cin >> x && x != -1.0) {
        if(n == 0) y = x;
        else if(x > y) y = x;
        n++;
    }
    std::cout << "Maximum number: " << y << std::endl;
    
    // Usage of get_positive and issame functions
    std::vector<float> v1 = {1, -2, 3};
    std::vector<float> v2 = {-4, 5, -6};
    if(issame(get_positive(v1), get_positive(v2))) {
        std::cout << "The two vectors contain the same positive numbers." << std::endl;
    } else {
        std::cout << "The two vectors do not contain the same positive numbers." << std::endl;
    }
    
    return 0;
}