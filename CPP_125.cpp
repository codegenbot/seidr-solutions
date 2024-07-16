vector<string> split_words(string txt){
        vector<string> result;
        string temp = "";
        bool hasWhitespace = false;
        for(char c : txt){
            if(c == ' '){
                result.push_back(temp);
                temp = "";
                hasWhitespace = true;
            }
            else if(c == ','){
                result.push_back(temp);
                temp = "";
            }
            else{
                temp += c;
            }
        }
        if(hasWhitespace){
            result.push_back(temp);
        }
        else if(temp.empty()){
            result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){return islower(c) && ((c-'a') % 2 == 1);}));
        }
        else{
            result.push_back(temp);
        }
        return result;
    }