#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l);

bool issame(vector<int> v1, vector<int> v2);

int main() {
    vector<int> l = {5, 2, 7, 1, 8, 4, 3, 9, 6};
    
    vector<int> sorted = sort_third(l);
    
    for(int num : sorted){
        cout << num << " ";
    }
    
    return 0;
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

bool issame(vector<int> v1, vector<int> v2){
    return v1 == v2;
}