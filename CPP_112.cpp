vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for(int i=0; i<s.length(); i++){
        bool flag = false;
        for(char j: c){
            if(s[i] == j){
                flag = true;
                break;
            }
        }
        if(flag==false)
            temp+=s[i];
    }
    string str = temp;
    reverse(str.begin(),str.end());
    if(str==temp)result.push_back("False");
    else result.push_back(str);
    result.push_back(temp);
    return result;
}