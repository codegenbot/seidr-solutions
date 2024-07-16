vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
  
    for(int i = 0; i < txt.length(); i++){
        if(txt[i] == ' ' || txt[i] == ','){
            result.push_back(word);
            word = "";
        }
        else{
            word += txt[i];
        }
    }
    
    if(word != ""){
        result.push_back(word);
    }
    
    if(result.size() == 1){
        int odd_count = 0;
        for(char c : result[0]){
            if(islower(c) && ((c - 'a') % 2 != 0)){
                odd_count++;
            }
        }
        result[0] = to_string(odd_count);
    }
    
    return result;
}