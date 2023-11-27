#include <vector>

bool move_one_ball(vector<int> arr){
    int n = arr.size();
    if(n == 0) return true;
    
    int minIndex = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    int count = 0;
    for(int i = minIndex; i < n; i++){
        if(arr[i] < arr[(i+1)%n]){
            count++;
        }else{
            break;
        }
    }
    
    return count == n-1;
}

int main(){
    assert (move_one_ball({})==true);
    // Add more test cases here
    
    return 0;
}