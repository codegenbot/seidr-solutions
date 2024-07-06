bool issame(vector<string> a,vector<string>b){
    vector<string> filter_a = filter_by_substring(a,"run");
    vector<string> filter_b = filter_by_substring(b,"run");

    if(filter_a.size() != filter_b.size()){
        return false;
    }

    for(auto s : filter_a){
        if(find(b.begin(),b.end(),s) == b.end())
            return false;
    }

    return true;
}

int main() {
    assert (issame({"grunt", "trumpet", "prune", "gruesome"}, {"grunt", "prune"}));
    return 0;
}