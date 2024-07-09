bool issame(vector<int> a,vector<int>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main(){
    vector<int> common = common({4, 3, 2, 8}, {});
    assert(issame(common,{},{});
    return 0;
}