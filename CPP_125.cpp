vector<string> split_words(string txt){
    vector<string> result;
    if (txt.find(' ') != string::npos) { // if there is a whitespace
        size_t pos = 0;
        string word;
        while ((pos = txt.find(' ')) != string::npos) {
            word = txt.substr(0, pos);
            result.push_back(word);
            txt.erase(0, pos + 1);
        }
        result.push_back(txt); // add the last word
    } else if (txt.find(',') != string::npos) { // if there is a comma
        size_t pos = 0;
        string word;
        while ((pos = txt.find(',')) != string::npos) {
            word = txt.substr(0, pos);
            result.push_back(word);
            txt.erase(0, pos + 1);
        }
        result.push_back(txt); // add the last word
    } else { // if there are no whitespaces or commas
        string count = to_string(count_if(txt.begin(), txt.end(), [](char c) { 
            return islower(c); 
        }));
        result.push_back(count);
    }
    return result;
}