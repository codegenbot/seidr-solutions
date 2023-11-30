int how_many_times(string str,string substring){
    int count = 0;
    int sub_len = substring.length();
    if(sub_len == 0)
        return 0;
    for(int i=0; i<=str.length()-sub_len; i++){
        if(str.substr(i, sub_len) == substring)
            count++;
    }
    return count;
}