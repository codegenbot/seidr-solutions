```
#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    bool flag = false;
    while(true){
        std::vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        if (temp != arr) {
            for(int i=0; i<n-1; ++i){
                swap(temp[i], temp[n - 1]);
            }
            flag = true;
        }else{
            return flag;
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    for(int i=0; i<n; ++i){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    if(move_one_ball(arr)){
        std::cout << "The array can be moved to a sorted state by moving one ball.\n";
    }else{
        std::cout << "The array cannot be moved to a sorted state by moving one ball.\n";
    }
    
    return 0;
}