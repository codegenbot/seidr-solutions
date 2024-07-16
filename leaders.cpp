#include <iostream>
#include <deque>

std::deque<int> leaders(const std::deque<int>& arr) {
    int n = arr.size();
    std::deque<int> result;

    for(int i=n-1; i>=0; i--) { 
        if(result.empty() || arr[i] >= result.back()) {
            result.push_front(arr[i]);
        } else {
            break;
        }
    }

    return result;
}

int main() {
    int n;
    std::deque<int> arr;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        int x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        arr.push_back(x);
    }

    std::deque<int> result = leaders(arr);

    std::cout << "Leaders: ";
    for(int i=0; i<result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}