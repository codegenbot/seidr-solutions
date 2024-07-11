bool issame(vector<string> a, vector<string> b){
    if(a == b)
        return true;
    else
        return false;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0 || issame(split(s), split(prefix))){
            result.push_back(s);
        }
    }
    return result;
}

vector<string> split(string str, char ch){
    vector<string> tokens;
    string token;
    for(int i = 0; i <= str.length(); i++){
        if(str[i] == ch || i == str.length()){
            token += ch;
            tokens.push_back(token);
            token = "";
        }
        else{
            token += str[i];
        }
    }
    return tokens;
}