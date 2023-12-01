bool issame(vector<int> a, vector<int> b){
    // Implementation of the issame function
    // ...
}

vector<int> sort_third(vector<int> l){
    vector<int> l_sorted = l;
    sort(l_sorted.begin(), l_sorted.end());
    for(int i = 0; i < l_sorted.size(); i++){
        if(i % 3 == 0){
            l_sorted[i] = l[i];
        }
    }
    return l_sorted;
}

int main(){
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    // ...
    
    return 0;
}