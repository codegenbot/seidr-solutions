```cpp
#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    for(int i=0; i<n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> arr[i];
    }

    std::vector<int> leadersList = leaders(arr);
    if(leadersList.size() > 0)
        std::cout << "The leaders in the array are: ";
    else
        std::cout << "No leader found in the array.";

    for(int i=0; i<leadersList.size(); i++) {
        std::cout << leadersList[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}