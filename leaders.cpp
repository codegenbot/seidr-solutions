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
    std::vector<int> test = {5, 2, 3, 4};
    std::cout << "Leaders: ";
    for (int leader : leaders(test)) {
        std::cout << leader << " ";
    }
    std::cout << std::endl;
    return 0;
}