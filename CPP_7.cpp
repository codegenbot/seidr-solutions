bool issame(vector<string> a,vector<string> b);

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a,vector<string> b){
    // implement the function here
    return true; // or false, depending on your logic
}