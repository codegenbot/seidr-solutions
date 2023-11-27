#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
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

vector<int> unique_digits(vector<int> x);

int main(){
    vector<int> a = {123, 456, 789};
    vector<int> b = {123, 456, 789};
    vector<int> c = {123, 456, 789, 246};
    
    bool result1 = issame(a, b);
    bool result2 = issame(a, c);
    
    vector<int> nums = {123, 456, 789, 246, 135, 802};
    vector<int> uniqueNums = unique_digits(nums);
    
    return 0;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        int num = x[i];
        bool hasEvenDigit = false;
        while(num > 0){
            int digit = num % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            num /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}