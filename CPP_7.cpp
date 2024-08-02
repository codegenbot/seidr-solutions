bool issame(vector<string> a,vector<string>b){
    for(string s : b){
        if(find(a.begin(),a.end(),s) == a.end())
            return false;
    }
    return true;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}