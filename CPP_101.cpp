Here is the solution:

vector<string> words_string(string s){
    vector<string> result;
    string word = "";
    
    for(char c : s){
        if(isalnum(c) || (c == ' ' && !word.empty())){
            word += c;
        } else {
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
    }
    
    if(!word.empty())result.push_back(word);
    return result;
}