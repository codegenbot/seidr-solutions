string find_max(vector<string> words){
    string result = *words.begin();
    for(const auto& word : words){
        if(word.size() > result.size()){
            result = word;
        } else if(word.size() == result.size()){
            if(word < result) {
                result = word;
            }
        }
    }
    return result;
}