vector<string> split_words(string txt){
    if(txt.find(' ') != string::npos){
        replace(txt.begin(), txt.end(), ',', ' ');
        vector<string> words;
        string word;
        for(char c : txt){
            if(c == ' '){
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        return words;
    } else if(txt.find(',') != string::npos){
        replace(txt.begin(), txt.end(), ' ', ',');
        vector<string> words;
        string word;
        for(char c : txt){
            if(c == ','){
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        return words;
    } else {
        int oddLowerCaseCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddLowerCaseCount++;
            }
        }
        return {to_string(oddLowerCaseCount)};
    }
}