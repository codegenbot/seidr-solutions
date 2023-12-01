#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> l){
    for(int i = 0; i < l.size(); i++){
        l[i]++;
    }
    return l;
}

bool issame_vectors(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}