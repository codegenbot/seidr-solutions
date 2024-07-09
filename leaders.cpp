#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    if(arr.empty()) {
        return {};
    }
    
    int n = arr.size();
    std::vector<int> res({arr.back()}); // initialize result with the last element
    
    for(int i=n-2; i>=0; i--) {
        if(res.back() <= arr[i]) 
            res.push_back(arr[i]);
        else
            break;
    }
    
    return res;
}

int main() {
    std::vector<int> input;
    int num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    std::vector<int> result = leaders(input);
    for(int i: result)
        std::cout << i << " ";
    return 0;
}