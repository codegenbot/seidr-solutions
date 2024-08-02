string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        } else {
            string temp = s.substr(i, 1);
            sort(temp.begin(), temp.end());
            result += temp;
            i++;
        }
    }
    return result;
}