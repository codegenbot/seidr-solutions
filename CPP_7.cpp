vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const string& s : strings){
        if (s.find(substring) != string::npos){
            result.push_back(s);
        }
    }
    return result;
}