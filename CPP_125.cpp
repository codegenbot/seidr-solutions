vector<string> split_words(string txt){
    vector<string> words;

    if(txt.find(' ') != string::npos){
        // Split on whitespace
        int startPos = 0;
        int endPos = 0;
        while(endPos != string::npos){
            endPos = txt.find(' ', startPos);

            string word = txt.substr(startPos, endPos - startPos);
            words.push_back(word);

            startPos = endPos + 1;
        }
    }
    else if(txt.find(',') != string::npos){
        // Split on comma
        int startPos = 0;
        int endPos = 0;
        while(endPos != string::npos){
            endPos = txt.find(',', startPos);

            string word = txt.substr(startPos, endPos - startPos);
            words.push_back(word);

            startPos = endPos + 1;
        }
    }
    else{
        // Return number of lowercase letters with odd order in the alphabet
        int count = 0;
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] >= 'a' && txt[i] <= 'z'){
                int ord = txt[i] - 'a';
                if(ord % 2 == 1){
                    count++;
                }
            }
        }
        words.push_back(to_string(count));
    }

    return words;
}