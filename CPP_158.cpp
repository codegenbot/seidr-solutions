Here is the solution:

string find_max(vector<string> words){
    string max_word;
    int max_unique = 0;
    for(string word : words){
        int unique_count = 0;
        set<char> char_set(word.begin(), word.end());
        if(char_set.size() > max_unique){
            max_unique = char_set.size();
            max_word = word;
        }
    }
    return max_word;
}