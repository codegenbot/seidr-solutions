#include <vector>
#include <cassert>

int can_arrange(std::vector<int> arr){
    int maxIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            maxIndex = i - 1;
        }
    }
    return maxIndex;
}

// Sample test cases
int main(){
    assert (can_arrange(std::vector<int>{}) == -1);
    assert (can_arrange(std::vector<int>{1,2,3,4}) == -1);
    assert (can_arrange(std::vector<int>{4,3,2,1}) == 2);
    
    return 0;
}