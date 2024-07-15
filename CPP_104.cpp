#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool is_same(int a, int b){
    return a == b;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        bool hasEvenDigit = false;
        int temp = num;
        while(temp > 0){
            if(temp % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {123, 456, 789};
    vector<int> output = unique_digits(input);
    for(int num : output){
        cout << num << " ";
    }
    
    assert(is_same(unique_digits({135, 103, 31}), vector<int>{31, 135}));
    
    return 0;
}