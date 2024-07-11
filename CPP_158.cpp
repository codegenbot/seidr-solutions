string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b){ 
            return (a.length() < b.length()) || 
                ((a.length() == b.length()) && a.compare(b) > 0); 
    });
    return res;
}