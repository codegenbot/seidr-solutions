#include <vector>

static int can_arrange(std::vector<int> arr){
    int index = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            index = i-1;
        }
    }
    return index;
}

int main(){
    assert(can_arrange({}) == -1);
    // Add more test cases if needed
    return 0;
}