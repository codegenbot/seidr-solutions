bool issame(vector<string> a,vector<string>b){
    for(const auto &s : a){
        if(std::find(b.begin(),b.end(),s)!=b.end())
            return false;
    }
    return true;
}

int main(){
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}