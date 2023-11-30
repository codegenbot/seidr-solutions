vector<string> split_words(string txt){
    vector<string> result;
    
    if(txt.find(' ') != string::npos){
        stringstream ss(txt);
        string word;
        while(getline(ss, word, ' ')){
            result.push_back(word);
        }
    }
    else if(txt.find(',') != string::npos){
        stringstream ss(txt);
        string word;
        while(getline(ss, word, ',')){
            result.push_back(word);
        }
    }
    else{
        result.push_back(to_string(count_if(txt.begin(), txt.end(), [](char c){
            return islower(c);
        })));
    }
    
    return result;
}