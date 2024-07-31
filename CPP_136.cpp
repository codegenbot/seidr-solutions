#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = 0;
    int smallest_positive = 0;
    
    for(int num : lst){
        if(num < 0 && num < largest_negative){
            largest_negative = num;
        }
        if(num > 0 && (num < smallest_positive || smallest_positive == 0)){
            smallest_positive = num;
        }
    }
    
    return {largest_negative, smallest_positive};
}

int main() {
    std::vector<int> input = {-5, 3, 1, -10, 7};
    std::vector<int> result = largest_smallest_integers(input);
    
    std::cout << "Largest negative: " << result[0] << " Smallest positive: " << result[1] << "\n";
    
    std::vector<int> check1 = {-10, 1};
    std::vector<int> check2 = largest_smallest_integers(input);
    
    if(issame(check1, check2)){
        std::cout << "Output is correct!\n";
    } else {
        std::cout << "Output is incorrect!\n";
    }
    
    return 0;
}