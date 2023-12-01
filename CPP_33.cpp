#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool check_eq(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> indices;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            indices.push_back(i);
        }
    }
    
    sort(indices.begin(), indices.end());
    
    for(int i = 0; i < indices.size(); i++){
        l_prime[indices[i]] = l[indices[i]];
    }
    
    return l_prime;
}

int main() {
    vector<int> l = {5, 6, 3, 4, 8, 9, 2, 1};
    vector<int> expected = {2, 6, 3, 4, 8, 9, 5, 1};
    
    vector<int> result = sort_third(l);
    
    assert(check_eq(result, expected));
    
    return 0;
}