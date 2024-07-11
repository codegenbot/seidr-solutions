vector<string> split_words(string txt){
    vector<string> result;
    size_t found = txt.find(" ");
    if(found != string::npos){
        string word;
        size_t start = 0;
        while(found != string::npos){
            word = txt.substr(start, found - start);
            result.push_back(word);
            start = found + 1;
            found = txt.find(" ", start);
        }
        word = txt.substr(start);
        result.push_back(word);
    } else {
        found = txt.find(",");
        if(found != string::npos){
            string word;
            size_t start = 0;
            while(found != string::npos){
                word = txt.substr(start, found - start);
                result.push_back(word);
                start = found + 1;
                found = txt.find(",", start);
            }
            word = txt.substr(start);
            result.push_back(word);
        } else {
            int count = 0;
            for(char c : txt){
                if(islower(c) && ((c - 'a') % 2 == 1)){
                    count++;
                }
            }
            result.push_back(to_string(count));
        }
    }
    return result;
}