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
    assert(monotonic({1.0, 2.0, 3.0}) == true);
    assert(monotonic({3.0, 2.0, 1.0}) == true);
    assert(monotonic({1.0, 2.0, 1.0}) == false);
    return 0;
}