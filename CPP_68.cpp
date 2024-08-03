#include <vector>

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int smallest_even = -1, smallest_index = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)){
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if(smallest_even != -1){
        result = { smallest_even, smallest_index };
    }
    
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> input = {1, 3, 4, 2, 5};
    std::vector<int> result = pluck(input);

    for(int num : result) {
        std::cout << num << " ";
    }
    return 0;
}