string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for(string s : words){
        if(count(s.begin(), s.end, [](char c){return isalpha(c);}) > count(result.begin(), result.end(), [](char c){return isalpha(c);})) {
            result = s;
        }
        else if(count(s.begin(), s.end, [](char c){return isalpha(c);}) == count(result.begin(), result.end(), [](char c){return isalpha(c);}) && s < result) {
            result = s;
        }
    }
    return result;
}