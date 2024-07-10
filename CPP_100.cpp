vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    
    while(stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }
    
    return pile;
}

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}