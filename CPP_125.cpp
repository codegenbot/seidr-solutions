vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(int i = 0; i < txt.size(); ++i){
        if(txt[i] == ' ' || txt[i] == ','){
            if(word != ""){
                result.push_back(word);
                word = "";
            }
        } else {
            word += txt[i];
        }
    }
    if(word != ""){
        result.push_back(word);
    }
    if(result.empty()){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && ((c - 'a') % 2 == 1)){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}