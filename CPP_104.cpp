#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        while(num > 0){
            int digit = num % 10;
            if(std::find(result.begin(), result.end(), digit) == result.end()){
                result.push_back(digit);
            }
            num /= 10;
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main(){
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}