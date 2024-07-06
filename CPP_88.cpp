```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0) {
        std::vector<int> result(array);
        std::sort(result.begin(), result.end(), std::greater<int>());
        return result;
    } else {
        std::vector<int> result(array);
        std::sort(result.begin(), result.end());
        return result;
    }
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    return 0;
}