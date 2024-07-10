bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> odd_count(vector<string> lst);

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + s + " of the " + to_string(odd_count) + "nput.";
        result.push_back(res);
    }
    return result;
}

// Test the function
assert (issame(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2n the str2ng 2 of the 2nput.",
        "the number of odd elements 3n the str3ng 3 of the 3nput.",
        "the number of odd elements 2n the str2ng 2 of the 2nput."
}));