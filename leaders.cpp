#include <iostream>
#include <deque>

std::deque<int> leaders(const std::deque<int>& arr) {
    int n = arr.size();
    std::deque<int> result;

    for(int i=n-1; i>=0; i--) { 
        int max_right = arr[i];  
        bool is_leader = true;
        for(int j=i+1; j<n; j++) { 
            if(arr[j] >= max_right) {
                max_right = arr[j];
                is_leader = false;
            }
        }
        if(is_leader)
            result.push_front(arr[i]);
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