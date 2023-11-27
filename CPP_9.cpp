#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

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

vector<int> rolling_max(vector<int> numbers){
    vector<int> rollingMax;
    int maxNum = numbers[0];
    rollingMax.push_back(maxNum);

    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > maxNum){
            maxNum = numbers[i];
        }
        rollingMax.push_back(maxNum);
    }

    return rollingMax;
}


int main() {
    vector<int> rolling_max_nums = rolling_max({3, 2, 3, 100, 3});
    assert(issame(rolling_max_nums, {3, 3, 3, 100, 100}));

    return 0;
}