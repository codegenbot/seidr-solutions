Here is the completed code:

string anti_shuffle(string s){
    string result = "";
    for(size_t i=0; i<s.size(); i++){
        if(s[i] == ' '){
            result += " ";
        } else {
            char temp[256];
            int j = 0;
            for(int k=i; k<s.size() && s[k] != ' '; k++){
                temp[j++] = tolower(s[k]);
            }
            temp[j]='\0';
            sort(temp, temp+j);
            result += string(temp)+ " ";
            i+k-1;
        }
    }
    return result;
}