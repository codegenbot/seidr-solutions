bool issame(const vector<string>& a, const vector<string>& b){
    return a == b;
}

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}