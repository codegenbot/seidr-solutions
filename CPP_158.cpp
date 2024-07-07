Here is the completed code:

string find_max(vector<string> words){
    string max = "";
    int max_len = 0;
    for(string word : words){
        set<char> unique_chars(word.begin(), word.end());
        if(unique_chars.size() > max_len){
            max = word;
            max_len = unique_chars.size();
        } else if (unique_chars.size() == max_len && word < max){
            max = word;
        }
    }
    return max;
}