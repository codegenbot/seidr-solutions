#include <vector>
#include <iostream>

using namespace std;

bool isSame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }

    return true;
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
    return result;
}

int main(){
    assert(isSame(unique_digits({135, 103, 31}) , {31, 135}));

    return 0;
}