pair<vector<string>, bool> reverse_delete(string s1, string s2) {
    int i=0,j=s2.size()-1;
    vector<string> result;
    while(i<=j){
        if(s1[i]!=s2[j])return make_pair({vector<string>({"",})}, false);
        i++;j--;
        result.push_back(s1.substr(0,i));
    }
    return make_pair(result, true);
}