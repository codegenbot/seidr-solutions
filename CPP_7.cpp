bool issame(vector<string> a,vector<string> b){
    vector<string> filtered = filter_by_substring(a,"same");
    for(const auto &str : b){
        if(find(filtered.begin(),filtered.end(),str) == filtered.end()){
            return false;
        }
    }
    return true;
}