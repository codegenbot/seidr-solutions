#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true;
    bool decreasing = true;
    
    for(int i = 1; i < l.size(); i++){
        if(l[i] < l[i-1]){
            increasing = false;
        }
        if(l[i] > l[i-1]){
            decreasing = false;
        }
    }
    
    return increasing || decreasing;
}

#include <iostream>
#include <vector>

bool monotonic(std::vector<float> l){
    // function implementation here
}

int main() {
    std::vector<float> nums = {9, 9, 9, 9};
    bool result = monotonic(nums);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}