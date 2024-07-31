bool is_same(string a, string b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    copy_if(strings.begin(), strings.end(), back_inserter(result), [&substring](const string& str){ return str.find(substring) != string::npos; });
    return result;
}