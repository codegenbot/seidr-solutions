string anti_shuffle(string s){
    string result = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        }
        else{
            string word;
            bool first = true;
            for(int j = i; j <= s.find(' ', i); j++){
                if(first){
                    first = false;
                }
                else{
                    word.push_back(s[j]);
                }
            }
            sort(word.begin(), word.end());
            result += word;
        }
    }
    return result;
}