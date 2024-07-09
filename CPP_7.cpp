vector<string> filter_strings(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main(){
    assert(sort(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run")) == {"grunt", "prune"});
    return 0;
}