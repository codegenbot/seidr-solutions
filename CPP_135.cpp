#include <vector>
#include <cassert>

#ifndef UNIQUE_IDENTIFIER
#define UNIQUE_IDENTIFIER

int can_arrange(std::vector<int> arr);

int can_arrange(std::vector<int> arr){
    int maxIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            maxIndex = i - 1;
        }
    }
    return maxIndex;
}

#endif

int main(){
   assert (can_arrange(std::vector<int>{}) == -1);
   return 0;
}