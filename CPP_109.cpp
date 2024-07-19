#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[0]) return false;
    }
    
    return true;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cin >> n;
    for(int i=0;i<n;i++){
        int num;
        std::cin>>num;
        arr.push_back(num);
    }
    
    assert(move_one_ball(arr) == true);
    
    return 0;
}