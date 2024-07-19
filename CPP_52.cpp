#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t){
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

int main() {
    // Your main function logic here
    return 0;
}