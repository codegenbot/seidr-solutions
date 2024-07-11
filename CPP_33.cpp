#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

void sort_third(vector<int>& l){
    for(int i = 0; i < l.size(); i += 3){
        sort(l.begin() + i, l.begin() + i + 3);
    }
}

int main(){
    vector<int> input = {5, 6, 3, 4, 8, 9, 2, 1};
    sort_third(input);
    assert(issame(input, {2, 6, 3, 4, 8, 9, 5, 1});
    
    return 0;
}