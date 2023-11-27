#include <iostream>
#include <vector>

bool triples_sum_to_zero(std::vector<int> l){
    for(int i=0; i<l.size()-2; i++){
        for(int j=i+1; j<l.size()-1; j++){
            for(int k=j+1; k<l.size(); k++){
                if(l[i] + l[j] + l[k] == 0){
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    // Test the function with some sample inputs
    std::vector<int> nums1 = {1, 2, 3, -4, -1};
    std::cout << triples_sum_to_zero(nums1) << std::endl;  // Output: true

    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    std::cout << triples_sum_to_zero(nums2) << std::endl;  // Output: false

    return 0;
}