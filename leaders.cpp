#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(res.empty() || arr[i] >= res.back()) 
            res.push_back(arr[i]);
        else
            break;
    }
    
    return res;
}

int main() {
    int n;
    std::vector<int> input;
    while(std::cin >> n) {
        input.push_back(n);
    }
    std::vector<int> result = leaders(input);
    for(int i: result)
        std::cout << i << " ";
    return 0;
}