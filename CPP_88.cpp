#include <vector>
bool issame(int n) {
    return n == 0 || n == 1;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    int sum = array.front() + array.back();
    if(issame(sum)){
        sort(array.begin(), array.end(), std::greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}