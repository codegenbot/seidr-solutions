#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    for (int i = 0; i < n; ++i) {
        std::vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        if (temp != arr) {
            bool flag = false;
            int j = 0;
            while(j < n-1) {
                if (arr[j] > arr[n - 1]) break;
                ++j;
            }
            swap(arr[j], arr[n - 1]);
            flag = true;
        }
        if (!flag) return false;
    }
    return true;
}

int main() {
    std::vector<int> arr;
    int n, val;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; ++i){
        std::cout << "Enter element" << (i+1) << ": ";
        std::cin >> val;
        arr.push_back(val);
    }
    if(move_one_ball(arr)){
        std::cout << "After one ball move the array is same." << std::endl;
    } else {
        std::cout << "The array after one ball move is different from the original array." << std::endl;
    }
}