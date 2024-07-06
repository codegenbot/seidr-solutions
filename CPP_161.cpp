std::string solve(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(i%2 == 0){
            if(isalpha(s[i])){
                char c = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
                result += c;
            } else {
                result += s[i];
            }
        } else {
            if(isalpha(result[result.length()-1])){
                char c = (islower(result[result.length()-1])) ? tolower(result[result.length()-1]) : toupper(result[result.length()-1]);
                result.pop_back();
                result += c;
            } else {
                result += s[i];
            }
        }
    }
    return result;
}