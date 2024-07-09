#include <vector>

vector<int> make_a_pile(int n);
bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> result;
    for(int i=0; i<n; ++i){
        result.push_back(n + 2*i);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}