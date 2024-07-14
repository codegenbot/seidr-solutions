#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; i--) {  
        if(arr[i] >= arr[i+1]) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {19};
    std::vector<int> output = leaders(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}