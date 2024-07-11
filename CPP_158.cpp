Here is the solution:

string find_max(vector<string> words){
    string res = words[0];
    int max_unique = 0;
    
    for(string word : words) {
        set<char> s(word.begin(), word.end());
        int unique = s.size();
        
        if(unique > max_unique || (unique == max_unique && word < res)) {
            res = word;
            max_unique = unique;
        }
    }
    
    return res;
}