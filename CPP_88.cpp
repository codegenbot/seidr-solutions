#include <vector>
bool issame(int x, int y) {
    return x == y;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    int sum = array.front() + array.back();
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), std::greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}