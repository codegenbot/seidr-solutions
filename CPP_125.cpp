vector<string> split_words(string txt){
    vector<string> result;
    size_t found = txt.find(' ');
    if(found != string::npos){
        string word;
        for(char c : txt){
            if(c == ' '){
                result.push_back(word);
                word = "";
            } else{
                word += c;
            }
        }
        result.push_back(word);
    } else{
        found = txt.find(',');
        if(found != string::npos){
            size_t pos = 0;
            while((pos = txt.find(',', pos)) != string::npos){
                txt.replace(pos, 1, " ");
                pos++;
            }
            string word;
            for(char c : txt){
                if(c == ' '){
                    result.push_back(word);
                    word = "";
                } else{
                    word += c;
                }
            }
            result.push_back(word);
        } else{
            int count = 0;
            for(char c : txt){
                if(islower(c)){
                    int order = c - 'a';
                    if(order % 2 != 0){
                        count++;
                    }
                }
            }
            result.push_back(to_string(count));
        }
    }
    return result;
}