#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size())
        return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> nums){
    std::vector<int> res;
    for(int num : nums){
        std::vector<int> digits;
        while(num > 0){
            digits.push_back(num % 10);
            num /= 10;
        }
        sort(digits.begin(), digits.end());
        int new_num = 0;
        for(int digit : digits){
            new_num = new_num * 10 + digit;
        }
        res.push_back(new_num);
    }
    return res;
}

int main(){
    assert(issame(unique_digits({135, 103, 31}) , {31, 135}));
  
    return 0;
}