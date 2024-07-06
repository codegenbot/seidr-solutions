bool issame(vector<string> a,vector<string>b){
    bool result = true;
    for(auto s : a) {
        if(std::count(b.begin(),b.end(),s) == 0) {
            result = false;
            break;
        }
    }
    return result;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}