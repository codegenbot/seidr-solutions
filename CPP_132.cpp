bool is_nested(string str){
    int cnt = 0;
    for(char bracket : str){
        if(bracket == '['){
            cnt++;
        } else if(bracket == ']'){
            if(cnt > 0){
                cnt--;
            }
        }
    }
    return cnt < str.length() / 2 && cnt > 0;
}