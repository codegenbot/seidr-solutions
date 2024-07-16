#include <vector>
#include <stack>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    std::stack<int> s;

    for(int i=n-1; i>=0; i--) { 
        while(!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if(s.empty()) {
            result.push_back(arr[i]);
        } else {
            result.push_back(s.top());
        }
        s.push(arr[i]);
    }

    std::vector<int> finalResult;
    while(!s.empty()) {
        finalResult.push_back(s.top());
        s.pop();
    }
    return finalResult;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    std::vector<int> result = leaders(arr);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}