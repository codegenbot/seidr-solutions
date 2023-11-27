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
    std::vector<float> test1 = {1.5, 2.2, 3.7, 4.9, 5.2};
    std::vector<float> test2 = {5.8, 4.3, 2.9, 1.6};
    std::vector<float> test3 = {3.5, 3.5, 3.5, 3.5};
    
    bool result1 = monotonic(test1);
    bool result2 = monotonic(test2);
    bool result3 = monotonic(test3);
    
    return 0;
}