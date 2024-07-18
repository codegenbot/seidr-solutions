#include <vector>

vector<int> count_up_to(int n){
    vector<int> numbers;
    for(int i = 2; i <= n; ++i){
        numbers.push_back(i);
    }
    return numbers;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}