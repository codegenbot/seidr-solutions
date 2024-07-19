#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> arr);

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> result = pluck(arr);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}