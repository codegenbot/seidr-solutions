string anti_shuffle(string s){
    string result = "";
    string temp = "";
    for(char c : s){
        if(c == ' '){
            sort(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }
    if(!temp.empty()){
        sort(temp.begin(), temp.end());
        result += temp;
    }
    return result;
}