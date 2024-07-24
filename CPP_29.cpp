vector<bool> issame(vector<string> a, vector<string> b) {
    vector<bool> result;
    for(auto s1 : a){
        for(auto s2 : b){
            if(s1 == s2)
                result.push_back(true);
            else
                result.push_back(false);
        }
    }
    return result;
}