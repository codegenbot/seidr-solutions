#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr){
    int n = arr.size();
    if(n == 0) return true;
    int minIdx = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[minIdx]){
            minIdx = i;
        }
    }
    int shifts = n - minIdx;
    return arr[minIdx] <= arr[0] && shifts % n == 0;
}

int main(){
    assert(move_one_ball({}) == true);
    // Add more test cases here
    
    return 0;
}