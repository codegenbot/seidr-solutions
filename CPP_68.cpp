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
    std::vector<int> input1 = {2, 4, 6, 8};
    std::vector<int> result1 = pluck(input1);
    
    std::vector<int> expected1 = {2, 0};
    if(issame(result1, expected1)){
        std::cout << "Test case 1 passed" << std::endl;
    } else {
        std::cout << "Test case 1 failed" << std::endl;
    }
    
    std::vector<int> input2 = {1, 3, 5, 7};
    std::vector<int> result2 = pluck(input2);
    
    std::vector<int> expected2 = {};
    if(issame(result2, expected2)){
        std::cout << "Test case 2 passed" << std::endl;
    } else {
        std::cout << "Test case 2 failed" << std::endl;
    }
    
    return 0;
}