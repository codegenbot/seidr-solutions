#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array){
    if(array.empty()){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    }else{
        sort(array.begin(), array.end());
    }
    return array;
}

bool isSame(vector<int> a, vector<int> b){
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
    assert(isSame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    assert(isSame(sort_array({1, 2, 3, 4, 5}) , {1, 2, 3, 4, 5}));
    assert(isSame(sort_array({9, 8, 7, 6}) , {6, 7, 8, 9}));
    assert(isSame(sort_array({}) , {}));

    return 0;
}