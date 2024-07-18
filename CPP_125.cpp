vector<string> split_words(string txt){
        vector<string> result;
        string word = "";
        bool hasWhitespace = false;
        
        for(char c : txt){
            if(c == ' '){
                result.push_back(word);
                word = "";
                hasWhitespace = true;
            } else if(c == ','){
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        
        if(word != ""){
            result.push_back(word);
        }
        
        if(result.size() == 1 && !hasWhitespace){
            int count = 0;
            for(char c : result[0]){
                if(islower(c) && (c - 'a') % 2 == 1){
                    count++;
                }
            }
            result[0] = to_string(count);
        }
        
        return result;
    }