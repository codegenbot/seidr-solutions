bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring);

int main(){
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    
    return 0;
}