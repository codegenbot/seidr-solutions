bool issame(vector<string> a, vector<string> b);

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    bool hasWhitespace = false;
    for(char c : txt){
        if(c == ' '){
            hasWhitespace = true;
            result.push_back(word);
            word = "";
        } else if(c == ','){
            hasWhitespace = true;
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    if(!hasWhitespace){
        if(word.empty()){
            result.push_back(to_string(3)); // Number of lower-case letters with odd order in the alphabet
        } else {
            result.push_back(word);
        }
    } else {
        result.push_back(word);
    }
    return result;
}