vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<vector<string>>& b, vector<string>& a){
    for(auto& v : b){
        bool found = false;
        for(auto& s : v){
            if(find(a.begin(), a.end(), s) != a.end()){
                found = true;
                break;
            }
        }
        if(!found)
            return false;
    }
    return true;
}

int main() {
    assert(issame({{{"grunt", "trumpet", "prune", "gruesome"}}, {{"grunt"}, {"prune"}}}) );
    return 0;
}