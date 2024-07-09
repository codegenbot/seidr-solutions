#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    std::vector<int> temp = arr;
    for (int i = 0; i < n; ++i) {
        bool changed = false;
        sort(temp.begin(), temp.end());
        if (temp != arr) {
            int j = 0;
            while (j < n - 1 && !changed) {
                if (temp[j] > temp[n - 1]) {
                    swap(temp[j], temp[n - 1]);
                    changed = true;
                }
                ++j;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
    }
    
    if (move_one_ball(arr)) {
        std::cout << "You can move one ball to make the array sorted.\n";
    } else {
        std::cout << "You cannot move one ball to make the array sorted.\n";
    }
    
    return 0;
}