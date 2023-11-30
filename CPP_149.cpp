vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        if(str.length() % 2 == 0){
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& s1, const string& s2){
        if(s1.length() == s2.length()){
            return s1 < s2;
        }
        return s1.length() < s2.length();
    });
    return result;
}