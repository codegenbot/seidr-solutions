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
    int n;
    cin >> n;
    vector<int> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
    vector<int> sorted_l = sort_third(l);
    for(int i = 0; i < sorted_l.size(); i++){
        cout << sorted_l[i] << " ";
    }
    cout << endl;
    return 0;
}