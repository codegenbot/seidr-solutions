vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    
    if(txt.find(' ') != string::npos){
        // split on whitespace
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] == ' '){
                result.push_back(word);
                word = "";
            }
            else{
                word += txt[i];
            }
        }
        result.push_back(word);
    }
    else if(txt.find(',') != string::npos){
        // split on comma
        for(int i = 0; i < txt.length(); i++){
            if(txt[i] == ','){
                result.push_back(word);
                word = "";
            }
            else{
                word += txt[i];
            }
        }
        result.push_back(word);
    }
    else{
        // no whitespace or comma, return number of odd alphabet positions
        int count = 0;
        for(int i = 0; i < txt.length(); i++){
            if(islower(txt[i])){
                int position = txt[i] - 'a';
                if(position % 2 == 1){
                    count++;
                }
            }
        }
        result.push_back(to_string(count));
    }
    
    return result;
}