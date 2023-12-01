#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l);

bool issame(vector<float> a, vector<float> b);

int main() {
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}

vector<float> sort_even(vector<float> l){
    vector<float> result;
    for(int i=0; i<l.size(); i+=2){
        result.push_back(l[i]);
    }
    sort(result.begin(), result.end());
    for(int i=0, j=0; i<l.size(); i+=2){
        l[i] = result[j++];
    }
    return l;
}

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}