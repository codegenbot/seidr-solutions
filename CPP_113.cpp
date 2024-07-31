bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string s : lst){
        int odd_count = 0;
        for(char c : s){
            if((c - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res = "The number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.";
        result.push_back(res);
    }
    return result;
}