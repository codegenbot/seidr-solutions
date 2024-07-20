bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i=0;i<a.size();i++){
        if(std::sort(a[i].begin(),a[i].end()) != std::sort(b[i].begin(),b[i].end()))
            return false;
    }
    return true;
}

int main() {
    assert (issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cccc", "dd", "aaaa", "bbbb"}));
    return 0;
}