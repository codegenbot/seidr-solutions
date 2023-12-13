#include <iostream>
#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true;
    bool decreasing = true;
    
    for (int i = 1; i < l.size(); i++) {
        if (l[i] < l[i-1]) {
            increasing = false;
        }
        if (l[i] > l[i-1]) {
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}

int main() {
    std::vector<float> test1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> test2 = {5.0, 4.0, 3.0, 2.0, 1.0};
    std::vector<float> test3 = {1.0, 2.0, 2.0, 3.0, 4.0};
    
    std::cout << monotonic(test1) << std::endl;
    std::cout << monotonic(test2) << std::endl;
    std::cout << monotonic(test3) << std::endl;
    
    return 0;
}