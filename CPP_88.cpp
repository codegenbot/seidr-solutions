```cpp
#include <vector>
#include <algorithm>

bool operator==(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> sort_array(std::vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0) {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end(), greater<int>());
        return sortedArray;
    } else {
        vector<int> sortedArray = array;
        sort(sortedArray.begin(), sortedArray.end());
        return sortedArray;
    }
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == std::vector<int>({23, 21, 14, 11}));
    return 0;
}