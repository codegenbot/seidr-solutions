```cpp
bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i] != b[i])return false;
    }
    return true;
}

int main() {
    assert(issame(by_length({1, 4, 9}), {"One", "Four", "Nine"}));
    return 0;
}