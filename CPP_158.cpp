```
string find_max(vector<string> words){
    string res = "";
    int max_uniq = 0;
    for(auto &s : words) {
        set<char> uniq(s.begin(), s.end());
        if(uniq.size() > max_uniq) {
            max_uniq = uniq.size();
            res = s;
        } else if(uniq.size() == max_uniq) {
            res = min(res, s);
        }
    }
    return res;
}