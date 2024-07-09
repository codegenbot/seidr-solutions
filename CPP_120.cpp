#include <vector>
#include <algorithm>
#include <iostream>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    if(k > arr.size()) {
        std::cout << "Invalid value of k. It must be less than or equal to the size of array." << std::endl;
        return {};
    }
    
    vector<int> result(std::vector<int>(arr.begin(), arr.begin() + k));
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == vector<int>({0, 2, 3}));
    return 0;
}