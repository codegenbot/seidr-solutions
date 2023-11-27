#include <vector>
#include <algorithm>

vector<int> unique_digits(vector<int> x);

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i=0; i<x.size(); i++){
        bool hasEvenDigit = false;
        int num = x[i];
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

int main(){
    assert(std::equal(unique_digits({135, 103, 31}).begin(), unique_digits({135, 103, 31}).end(), std::begin({31, 135})));
    return 0;
}