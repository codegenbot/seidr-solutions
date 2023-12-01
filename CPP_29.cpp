vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> filteredStrings;
    for (string str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    return filteredStrings;
}

bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}