#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> unique_digits(std::vector<int> x){
    std::vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> input = {142, 546, 609, 273, 135};
    std::vector<int> expected_output = {135, 273, 609};
    std::vector<int> output = unique_digits(input);
    assert(issame(expected_output, output));
    
    return 0;
}