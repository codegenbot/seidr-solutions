vector<string> split_words(string txt){
        vector<string> result;
        string word;
        for(char c : txt){
            if(c == ' ' || c == ','){
                result.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        if(word != ""){
            result.push_back(word);
        }
        if(result.size() == 0){
            int count = 0;
            for(char c : txt){
                if(islower(c) && (c - 'a') % 2 != 0){
                    count++;
                }
            }
            return {to_string(count)};
        }
        return result;
    }