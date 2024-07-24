bool issame(vector<string> a, vector<string>b) {
    bool same = true;
    for(int i=0;i<a.size()&&i<b.size();++i) {
        if(a[i]!=b[i])
            same=false;
    }
    return same && (a.size()==b.size());
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    // your code here
}