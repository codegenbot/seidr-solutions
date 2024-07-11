#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {2, 4, 7, 10, 1, 8};
    int cut_index = 2; 
    int n = arr.size();

    for (int i = cut_index; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
    
    return 0;
}