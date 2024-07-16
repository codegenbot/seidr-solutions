#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) { 
        while(i < n-1 && arr[i] <= arr.back()) {
            arr.pop_back();
        }
        if(result.empty() || arr[i] >= result.back()) {
            result.push_back(arr[i]);
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