#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    vector<int>::iterator it = unique(l.begin(), l.end());
    l.erase(it, l.end());
    return l;
}