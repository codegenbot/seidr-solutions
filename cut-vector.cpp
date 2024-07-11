#include <iostream>
#include <vector>

void findCutSpot(const std::vector<int>& arr) {
    int n = arr.size();
    int cut_index = -1;
    int min_diff = INT_MAX;

    for (int i = 1; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        for (int j = 0; j < i; j++) {
            left_sum += arr[j];
        }
        for (int j = i; j < n; j++) {
            right_sum += arr[j];
        }
        
        int diff = abs(left_sum - right_sum);
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }

    for (int i = 0; i < cut_index; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = cut_index; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    std::vector<int> arr = {3, 7, 2, 5, 8};
    findCutSpot(arr);
    return 0;
}