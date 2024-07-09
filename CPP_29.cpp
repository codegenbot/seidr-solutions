vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(find(a[i].begin(), a[i].end(), ' ') == string::npos)) {
            int pos1 = find(a[i].begin(), a[i].end(), ' ');
            int pos2 = find(b[i].begin(), b[i].end(), ' ');
            if (pos1 != pos2) 
                return false;
        }
    }
    return true;
}