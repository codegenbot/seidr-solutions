#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> incr_list(std::initializer_list<int> l){
    vector<int> result;
    for(int i: l) {
        result.push_back(i+1);
    }
    return result;
}