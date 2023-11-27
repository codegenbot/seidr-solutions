#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true;
    bool decreasing = true;
    
    for(int i=1; i<l.size(); i++){
        if(l[i] < l[i-1]){
            increasing = false;
        }
        if(l[i] > l[i-1]){
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}

int main() {
    // Test cases
    std::vector<float> v1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << monotonic(v1) << std::endl; // Output: 1

    std::vector<float> v2 = {5.0, 4.0, 3.0, 2.0, 1.0};
    std::cout << monotonic(v2) << std::endl; // Output: 1
    
    std::vector<float> v3 = {1.0, 2.0, 2.0, 4.0, 5.0};
    std::cout << monotonic(v3) << std::endl; // Output: 1
    
    std::vector<float> v4 = {1.0, 2.0, 3.0, 2.0, 1.0};
    std::cout << monotonic(v4) << std::endl; // Output: 0
    
    return 0;
}