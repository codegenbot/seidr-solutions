#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true;
    bool decreasing = true;
    
    for(int i = 1; i < l.size(); i++){
        if(l[i] > l[i-1]){
            decreasing = false;
        }
        if(l[i] < l[i-1]){
            increasing = false;
        }
    }
    
    return increasing || decreasing;
}

int main(){
    // Test case 1
    std::vector<float> test1 = {1.5, 2.0, 3.0, 4.5};
    bool result1 = monotonic(test1);
    // Expected output: true
    
    // Test case 2
    std::vector<float> test2 = {3.0, 2.0, 1.0};
    bool result2 = monotonic(test2);
    // Expected output: true
    
    // Test case 3
    std::vector<float> test3 = {1.0, 2.0, 1.5, 3.0};
    bool result3 = monotonic(test3);
    // Expected output: false
    
    // Test case 4
    std::vector<float> test4 = {1.0, 1.0, 1.0, 1.0};
    bool result4 = monotonic(test4);
    // Expected output: true
    
    // Test case 5
    std::vector<float> test5 = {4.5, 3.0, 2.0, 1.5};
    bool result5 = monotonic(test5);
    // Expected output: true
    
    return 0;
}