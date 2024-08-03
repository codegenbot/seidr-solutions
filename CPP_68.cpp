#include <iostream>
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
    int n;
    std::vector<int> nums;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    std::vector<int> plucked = pluck(nums);
    
    if (!plucked.empty()) {
        std::cout << "Smallest even number: " << plucked[0] << " at index " << plucked[1] << std::endl;
    }
    else {
        std::cout << "No even numbers found in the input." << std::endl;
    }
    
    return 0;
}