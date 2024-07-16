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

int main() { return 0; }