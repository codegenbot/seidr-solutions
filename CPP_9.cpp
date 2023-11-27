#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max = numbers[0];
    result.push_back(max);
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
        result.push_back(max);
    }
    return result;
}

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

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    // add more test cases here
    assert(issame(rolling_max({1, 2, 3, 4, 5}), {1, 2, 3, 4, 5}));
    assert(issame(rolling_max({5, 4, 3, 2, 1}), {5, 5, 5, 5, 5}));
    assert(issame(rolling_max({10, 20, 30, 20, 10}), {10, 20, 30, 30, 30}));

    return 0;
}