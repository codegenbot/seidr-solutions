bool issame(vector<string> a,vector<string>b){
    if(a.size()!=b.size())return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main() {
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cccc", "dd", "aaaa", "bbbb"}));
    return 0;
}