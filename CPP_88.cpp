#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0) {
        std::vector<int> sortedArray = array;
        std::sort(sortedArray.begin(), sortedArray.end(), std::greater<int>());
        return sortedArray;
    } else {
        std::vector<int> sortedArray = array;
        std::sort(sortedArray.begin(), sortedArray.end());
        return sortedArray;
    }
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == std::vector<int>({23, 21, 14, 11}));
}