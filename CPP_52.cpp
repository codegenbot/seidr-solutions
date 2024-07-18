#include <iostream>
#include <vector>

using namespace std;

bool below_threshold(const std::vector<int>& l, int t) {
    for(int num : l){
        if(num >= t){
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}