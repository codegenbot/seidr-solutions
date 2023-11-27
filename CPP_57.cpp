#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool monotonic(vector<float> l){
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

int main() {
    // Test the monotonic function
    assert(monotonic({9, 9, 9, 9}) == true);
    
    return 0;
}