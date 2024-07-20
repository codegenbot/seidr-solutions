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
    std::vector<float> nums = {1.0, 2.0, 3.0, 4.0, 5.0};
    assert(monotonic(nums));
    return 0;
}