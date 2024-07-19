#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void sort_array(std::vector<int>& array) {
    if(array.empty()) return;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        sort(array.rbegin(), array.rend());
    else
        sort(array.begin(), array.end());
}

int main() {
    std::vector<int> input = {4, 2, 3, 1};
    std::vector<int> expected_output = {4, 2, 3, 1};
    
    sort_array(input);
    
    if(issame(input, expected_output))
        return 0;
    else
        return 1;
}