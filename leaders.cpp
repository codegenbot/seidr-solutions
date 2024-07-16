#include <iostream>
#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=0; i<n; i++) { 
        bool leader = true;
        for(int j=i+1; j<n; j++) { 
            if(arr[i] <= arr[j]) {
                leader = false;
                break;
            }
        }

        if(leader) {
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