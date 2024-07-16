#include <vector>
#include <iostream>
#include <limits.h>
#include <cassert>

using namespace std;

bool is_same(vector<int> a, vector<int> b){
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
    vector<int> result;
    int max_so_far = INT_MIN;
    for(int i=0; i<numbers.size(); i++){
        max_so_far = max(max_so_far, numbers[i]);
        result.push_back(max_so_far);
    }
    return result;
}

int main(){
    assert(is_same(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}