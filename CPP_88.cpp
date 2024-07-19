#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void sort_array(std::vector<int>& array) {
    if(array.empty()) return;
    
    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        std::sort(array.rbegin(), array.rend());
    else
        std::sort(array.begin(), array.end());
}

int main() {
    std::vector<int> array = {5, 2, 8, 1, 3};
    std::vector<int> expected = {8, 5, 3, 2, 1};
    
    sort_array(array);
    
    if(issame(array, expected))
        std::cout << "Output is correct!\n";
    else
        std::cout << "Output is incorrect!\n";
    
    return 0;
}