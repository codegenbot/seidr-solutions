#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr){
    int n = arr.size();
    for(int i = n-1; i > 0; i--){
        if(arr[i] < arr[i-1]){
            return i-1;
        }
    }
    return -1;
}

int solve() {
    assert (can_arrange({}) == -1);
    // Add more test cases here
    
    return 0;
}