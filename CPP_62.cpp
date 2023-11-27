#include <iostream>
#include <vector>

using namespace std;

vector<int> derivative(vector<int> xs){
    vector<int> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    assert (issame(derivative({1}) , {}));

    return 0;
}