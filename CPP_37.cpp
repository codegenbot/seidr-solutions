#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b){
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

vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even;
    
    for(int i=0; i<l.size(); i+=2){
        even.push_back(l[i]);
    }
    
    sort(even.begin(), even.end());
    
    for(int i=0, j=0; i<l.size(); i+=2, j++){
        result[i] = even[j];
    }
    
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}