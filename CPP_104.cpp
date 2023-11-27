#include <vector>
#include<algorithm>
#include<cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool hasEvenDigit(int num) {
    while(num > 0){
        int digit = num % 10;
        if(digit % 2 == 0){
            return true;
        }
        num /= 10;
    }
    return false;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        if(!hasEvenDigit(x[i])){
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}