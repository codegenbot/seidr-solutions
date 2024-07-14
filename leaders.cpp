#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; i--) {  
        int maxSoFar = arr[i];
        for(int j=i-1; j>=0; j--) {  
            if(arr[j] > maxSoFar) {
                maxSoFar = arr[j];
                break;
            }
        }
        if(maxSoFar <= arr[i]) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {12, 10, 8, 6, 4};
    std::vector<int> output = leaders(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}