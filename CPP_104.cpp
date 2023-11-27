#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool hasEvenDigit(int num){
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
    for(int num : x){
        if(!hasEvenDigit(num)){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool isSameVector(vector<int> a, vector<int> b){
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

int main(){
    assert(isSameVector(unique_digits({135, 103, 31}), {31, 135}));

    cout << "All test cases passed!" << endl;
    return 0;
}