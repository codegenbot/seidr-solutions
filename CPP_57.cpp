#include <vector>

bool monotonic(std::vector<float> l){
    bool increasing = true, decreasing = true;
    for(int i=1; i<l.size(); i++){
        if(l[i] < l[i-1])
            increasing = false;
        if(l[i] > l[i-1])
            decreasing = false;
    }
    return increasing || decreasing;
}

int main() {
    std::vector<float> nums = {1.2, 2.3, 3.4, 4.5};
    assert(monotonic(nums));
}