#include <vector>
#include <cassert>

using namespace std;

bool move_one_ball(const vector<int>& arr){
    if(arr.empty()){
        return true;
    }
    
    size_t n = arr.size();
    size_t minIndex = 0;
    for(size_t i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    size_t shift = minIndex;
    for(size_t i = 0; i < n; i++){
        size_t index = (i + shift) % n;
        if(arr[index] < arr[(index + 1) % n]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(move_one_ball(vector<int>()) == true);

    vector<int> arr = {3, 2, 1};
    assert(move_one_ball(arr) == false);
    
    return 0;
}