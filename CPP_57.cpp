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
    std::vector<float> test1 = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> test2 = {5.0, 4.0, 3.0, 2.0, 1.0};
    std::vector<float> test3 = {1.0, 2.0, 3.0, 2.0, 1.0};
    
    bool result1 = monotonic(test1);
    bool result2 = monotonic(test2);
    bool result3 = monotonic(test3);
    
    return 0;
}