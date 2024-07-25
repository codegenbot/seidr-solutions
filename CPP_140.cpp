string fix_spaces(string text){
    string result;
    int consecutiveSpaces = 0;
    for(char c : text){
        if(c == ' '){
            consecutiveSpaces++;
            if(consecutiveSpaces > 2){
                result.pop_back(); // Remove last space
                result.pop_back(); // Remove second last space
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            result.push_back(c);
            consecutiveSpaces = 0;
        }
    }
    return result;
}