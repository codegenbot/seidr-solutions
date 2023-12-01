#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_array(vector<int> array){
    if(array.size() <= 1){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    }
    else{
        sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    vector<int> result = sort_array({21, 14, 23, 11});
    assert(issame(result, {23, 21, 14, 11}));

    return 0;
}