#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<int> sum_product(std::vector<int> nums){
    int sum = 0;
    int product = 1;
    
    for(int num : nums){
        sum += num;
        product *= num;
    }
    
    return {sum, product};
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for(int i=0; i<n; i++){
        std::cin >> nums[i];
    }

    std::vector<int> result = sum_product(nums);

    std::cout << "Sum: " << result[0] << std::endl;
    std::cout << "Product: " << result[1] << std::endl;
    
    return 0;
}