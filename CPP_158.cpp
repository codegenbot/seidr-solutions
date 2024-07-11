string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(), 
        [&] (const string &a, const string &b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            else {
                return a.length() > b.length();
            }
        });
    for(const auto& word : words){
        int unique = 0;
        bool found[256] = {false}; // Assuming ASCII characters
        for(char c : word){
            if(!found[c]){
                found[c]=true;
                unique++;
            }
        }
        if(unique > (res.length())){
            res = word;
        }
    }
    return res;
}