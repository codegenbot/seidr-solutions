#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(const vector<int>& l){
    vector<int> result;
    for(int i: l) {
        result.push_back(i+1);
    }
    return result;