#include <vector>
#include <algorithm>
#include <cassert> // Include for assert

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    if (k < 0) {
        arr.clear();
    } else {
        arr.resize(k);
    }
    return arr;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    return 0;
}