#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l);
bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
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

int main(){
    vector<int> a = {3, 2, 5, 1, 4, 6};
    vector<int> b = {3, 2, 5, 1, 4, 6};
    vector<int> c = {3, 2, 1, 5, 4, 6};
    
    if(issame(sort_third(a), c)){
        cout << "Test 1 Passed!" << endl;
    } else {
        cout << "Test 1 Failed!" << endl;
    }
    
    if(!issame(sort_third(a), b)){
        cout << "Test 2 Passed!" << endl;
    } else {
        cout << "Test 2 Failed!" << endl;
    }
    
    return 0;
}