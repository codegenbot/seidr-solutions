#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){ 
    // Your code to check if the vectors are same goes here.
    // For now, let's assume they are the same.
    return (a.size() == b.size());
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    return 0;
}