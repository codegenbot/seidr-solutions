vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            bool found = false;
            for(auto t : result) {
                if(issame(split(t), split(substring))) {
                    found = true; break;
                }
            }
            if(!found) result.push_back(s);
        }
    }
    return result;

}

vector<string> split(string s){
    vector<string> result;
    string temp = "";
    for(char c : s) {
        if(c == ' ') {
            result.push_back(temp); 
            temp = "";
        } else {
            temp += c; 
        }
    }
    result.push_back(temp);
    return result;
}