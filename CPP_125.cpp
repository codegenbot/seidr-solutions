vector<string> split_words(string txt){
    vector<string> result;
    if(txt.find(' ') != string::npos){
        size_t pos = 0;
        string token;
        while ((pos = txt.find(' ')) != string::npos) {
            token = txt.substr(0, pos);
            result.push_back(token);
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else if(txt.find(',') != string::npos){
        size_t pos = 0;
        string token;
        while ((pos = txt.find(',')) != string::npos) {
            token = txt.substr(0, pos);
            result.push_back(token);
            txt.erase(0, pos + 1);
        }
        result.push_back(txt);
    } else {
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}