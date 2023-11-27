#include <vector>
#include <algorithm>
#include <cassert>

vector<int> unique_digits(vector<int> x);

bool issame_set(vector<int> a, vector<int> b);

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
            num = num / 10;
        }
        if(!hasEvenDigit){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool issame_set(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(){
    assert(issame_set(unique_digits({135, 103, 31}), {31, 135}));
}