vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    if(a.size() != b.size()) same = false;
    for(int i=0; i<a.size(); i++){
        if(!filter_by_substring({a[i],b[i]}, " ").empty()){
            same = false;
            break;
        }
    }
    return same;
}