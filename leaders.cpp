#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) { 
        std::vector<int> temp = arr;
        while(i < n-1 && temp[temp.size()-1-i] >= arr.back()) {
            temp.pop_back();
        }
        temp.pop_back(); // Make a copy and modify it
        if(result.empty() || temp[0] >= result.back()) {
            result.push_back(temp[0]);
        }
    }

    return result;
}

int main() {
    int n;
    std::vector<int> arr;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }

    std::vector<int> result = leaders(arr);

    std::cout << "Leaders: ";
    for(int i=0; i<result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}