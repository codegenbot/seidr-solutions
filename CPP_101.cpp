```cpp
std::vector<std::string> words_string(std::string s){
    std::vector<std::string> result;
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word.size() <= 30){ 
                result.push_back(word);
                word = "";
            }else{
                // Truncate the word to 30 characters
                int j = word.find_last_of(" ");
                if(j != std::string::npos) {
                    word = word.substr(0, j+1);
                }
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(word.size() <= 30)  
        result.push_back(word);
    return result;
}