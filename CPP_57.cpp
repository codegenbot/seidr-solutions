#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool monotonic(vector<float> l){
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

int main() {
    // Test cases
    assert(monotonic({1.3, 2.5, 3.7}) == true);
    assert(monotonic({3.7, 2.5, 1.3}) == true);
    assert(monotonic({1.3, 2.5, 1.7}) == false);
    assert(monotonic({1.3, 1.3, 1.3, 1.3}) == true);

    return 0;
}