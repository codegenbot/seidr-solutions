vector<string> split_words(string txt){
        vector<string> result;
        string word = "";
        bool hasWhitespace = false;
        
        for(char c : txt){
            if(c == ' '){
                hasWhitespace = true;
                if(word != ""){
                    result.push_back(word);
                    word = "";
                }
            } else if(c == ','){
                hasWhitespace = true;
                if(word != ""){
                    result.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        
        if(word != ""){
            result.push_back(word);
        }
        
        if(!hasWhitespace && result.size() == 1){
            int oddCount = 0;
            for(char c : result[0]){
                if(islower(c) && (c - 'a') % 2 == 1){
                    oddCount++;
                }
            }
            result[0] = to_string(oddCount);
        }
        
        return result;
    }