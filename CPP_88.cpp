#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    
    if(sum % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    } else {
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    std::vector<int> sorted = sort_array({21, 14, 23, 11});
    std::vector<int> expected = {23, 21, 14, 11};
    
    assert(issame(sorted, expected));
    
    return 0;
}