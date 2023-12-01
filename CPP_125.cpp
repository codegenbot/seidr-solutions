vector<string> split_words(string txt){
    vector<string> result;
    string word = "";

    for(char ch : txt){
        if(ch == ' ' || ch == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
        else{
            word += ch;
        }
    }

    if(!word.empty()){
        result.push_back(word);
    }

    if(result.empty()){
        int oddCount = 0;

        for(char ch : txt){
            if(islower(ch) && (ch - 'a') % 2 != 0){
                oddCount++;
            }
        }

        result.push_back(to_string(oddCount));
    }

    return result;
}