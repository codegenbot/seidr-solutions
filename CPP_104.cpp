#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::std::vector<int> a, std::std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::std::vector<int> unique_digits(std::std::vector<int> x){
    std::std::vector<int> result;
    for(auto num : x){
        std::std::vector<int> digits;
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