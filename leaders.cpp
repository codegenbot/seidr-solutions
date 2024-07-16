```c++
#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxRight = arr[n-1]; // Initialize the maximum right element as the last element of the array

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 3, 4, 3, 2, 3, 10, 12};
    std::cout << "Leaders: ";
    for (int leader : leaders(input)) {
        std::cout << leader << " ";
    }
    std::cout << "\n";
    return 0;
}