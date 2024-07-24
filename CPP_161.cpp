int n = s.size();
    for(int i = 0; i < n; i++){
        if(isalpha(s[i])){
            if(islower(s[i])){
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    int start = 0, end = n-1;
    while(start < end){
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}