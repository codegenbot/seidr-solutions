std::string anti_shuffle(std::string s) {
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            result += ' ';
        } else {
            string temp = "";
            int j=i;
            while(j <= s.find(' ', i)){
                temp += s[j];
                j++;
            }
            sort(temp.begin(), temp.end());
            result += temp;
            i = j - 1;
        }
    }
    return result;
}