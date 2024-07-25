#include <vector>

int can_arrange(std::vector<int> arr){
    int index = -1;
    for(int i = 1; i < arr.size(); ++i){
        if(arr[i] < arr[i-1]){
            index = i - 1;
        }
    }
    return index;
}

int main() {
    if (can_arrange({}) == -1) {
        // Handle the case where the return value is -1
    }
    return 0;
}