int how_many_times(string str, string substring){
    int count = 0;
    int n = str.length();
    int m = substring.length();
    
    if(m == 0)
        return 0;

    for(int i=0; i<=n-m; i++){
        bool found = true;
        for(int j=0; j<m; j++){
            if(str[i+j] != substring[j]){
                found = false;
                break;
            }
        }
        if(found)
            count++;
    }
    return count;
}