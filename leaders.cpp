#include <vector>
#include <iostream>
using namespace std;

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_right = arr.back();

    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }

    return res;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 2, 3}; 
    std::vector<int> leaders_arr = leaders(arr);
    for (int i=0; i<leaders_arr.size(); i++) std::cout << leaders_arr[i] << " "; 
    return 0;
}