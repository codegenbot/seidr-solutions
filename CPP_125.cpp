vector<string> split_words(string txt){
        vector<string> result;
        string temp = "";
        bool hasWhitespace = false;
        for(char c : txt){
            if(c == ' '){
                result.push_back(temp);
                temp = "";
                hasWhitespace = true;
            } else if(c == ','){
                result.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        if(temp != ""){
            result.push_back(temp);
        }
        if(result.empty() && !hasWhitespace){
            int count = 0;
            for(char c : txt){
                if(islower(c) && (c - 'a') % 2 == 1){
                    count++;
                }
            }
            result.push_back(to_string(count));
        }
        return result;
    }