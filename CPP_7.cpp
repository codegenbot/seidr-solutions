vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

bool issame(string s1, string s2){
    bool flag = true;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
            flag = false;
            break;
        }
    }
    return flag;
}