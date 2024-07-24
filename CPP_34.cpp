#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(){
    vector<int> vec1 = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> vec2 = {0, 2, 3, 5, 9, 123};
    
    sort(vec1.begin(), vec1.end());
    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
    
    sort(vec2.begin(), vec2.end());
    vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());

    assert(issame(vec1, vec2));
    return 0;
}