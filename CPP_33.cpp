#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l);

bool issame(vector<int> a, vector<int> b);

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

int main() {
    vector<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> l_sorted = sort_third(l);

    vector<int> expected_output = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool is_same = issame(l_sorted, expected_output);
    
    if(is_same){
        cout << "The sort_third function is working correctly." << endl;
    } else {
        cout << "The sort_third function is not working correctly." << endl;
    }
    
    return 0;
}