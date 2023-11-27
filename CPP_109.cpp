#include<vector>

bool move_one_ball(vector<int> arr){
    if(arr.empty()){
        return true;
    }
    
    int n = arr.size();
    int minIndex = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    int shiftCount = n - minIndex;
    for(int i = 0; i < n; i++){
        if(arr[(i + shiftCount) % n] < arr[(i + shiftCount - 1) % n]){
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(move_one_ball(vector<int>{}) == true);
    return 0;
}