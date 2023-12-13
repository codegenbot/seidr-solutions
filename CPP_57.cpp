```cpp
#include <vector>
#include <cassert>

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

// Comment out or remove the existing main() function
/*
int main() {
    assert(monotonic(std::vector<float>{9, 9, 9, 9}) == true);
    return 0;
}
*/

// Add a new main() function
int main() {
    // Test the monotonic function
    assert(monotonic(std::vector<float>{9, 9, 9, 9}) == true);
    return 0;
}
```