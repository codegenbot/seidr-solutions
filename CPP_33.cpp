#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> sort_third(vector<int> l);

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

int main() {
    // Test the sort_third function
    vector<int> test_input = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> expected_output = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> result = sort_third(test_input);
    
    if (issame(result, expected_output)) {
        cout << "Test passed." << endl;
    } else {
        cout << "Test failed." << endl;
    }
    
    return 0;
}