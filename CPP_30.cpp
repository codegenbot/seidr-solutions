#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size();
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<float> vec1(n);
    std::vector<float> vec2(n);
    
    std::cout << "Enter elements for vector 1: ";
    for (float &x : vec1) {
        std::cin >> x;
    }
    
    std::cout << "Enter elements for vector 2: ";
    for (float &x : vec2) {
        std::cin >> x;
    }
    
    if(issame(vec1, vec2)) {
        std::cout << "The two vectors are the same.\n";
    } else {
        std::cout << "The two vectors are not the same.\n";
    }
    
    return 0;
}