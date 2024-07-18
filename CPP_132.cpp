bool is_nested(string str){
    int cnt = 0;
    for(char c : str){
        if(c == '[') cnt++;
        else if(cnt > 0) cnt--;
    }
    return cnt < str.length() && cnt > 0;
}