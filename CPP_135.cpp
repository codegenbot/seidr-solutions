```cpp
#include <vector>
int can_arrange(std::vector<int> arr);
int main(){
    assert(can_arrange({})==-1);
}
int can_arrange(vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1]) return i;
    }
    return -1;
}