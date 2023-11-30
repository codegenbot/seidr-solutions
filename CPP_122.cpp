#include <vector>

int main() {
    std::vector<int> arr = {1, 2, 3, 10, 15, 100};
    int k = arr.size();
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
            count++;
        }
    }
    
    return sum;
}