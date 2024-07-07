bool issame(vector<string> a, vector<string> b) {
    bool same = true;
    if(a.size() != b.size())
        same = false;
    else
        for(int i=0; i<a.size(); i++)
            if(a[i] != b[i])
                same = false;
    return same;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for(auto s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}