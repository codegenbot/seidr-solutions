#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

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

int main(){
    std::vector<int> test1 = {1, 3, 4, 6, 7};
    std::vector<int> result = pluck(test1);
    
    std::vector<int> expected_result = {4, 2};
    
    if(issame(result, expected_result)){
        std::cout << "Test case passed" << std::endl;
    } else {
        std::cout << "Test case failed" << std::endl;
    }
    
    return 0;
}