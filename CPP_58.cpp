```cpp
bool issame(vector<int> a, vector<int>b){
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> common;
    
    for(auto i : s1){
        if(s2.find(i)!=s2.end())
            common.insert(i);
    }
    
    vector<int> result(common.begin(),common.end());
    sort(result.begin(),result.end());
    return result;
}

int main(){
    assert (issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}