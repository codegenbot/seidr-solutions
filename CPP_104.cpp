#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(auto num : x){
        std::vector<int> digits;
        while(num > 0){
            int digit = num % 10;
            if(std::find(digits.begin(), digits.end(), digit) == digits.end()){
                digits.push_back(digit);
            }
            num /= 10;
        }
        std::sort(digits.begin(), digits.end());
        int num_reconstructed = 0;
        for(int d : digits){
            num_reconstructed = num_reconstructed * 10 + d;
        }
        result.push_back(num_reconstructed);
    }
    std::sort(result.begin(), result.end());
    return result;
}

void main(){
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    assert(issame(unique_digits({123, 456, 789}), {123, 456, 789}));
    assert(issame(unique_digits({111, 222, 333}), {1, 2, 3}));
}