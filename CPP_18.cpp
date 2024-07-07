int how_many_times(string str, string substring) {
    int count = 0;
    int n = str.length();
    int m = substring.length();
    for(int i=0; i<=n-m; i++){
        if(str.substr(i,m) == substring){
            count++;
        }
    }
    return count;
}