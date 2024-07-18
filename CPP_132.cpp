int n = str.size();
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '['){
            cnt++;
        } else {
            cnt--;
        }
        if(cnt > 0 && cnt < n){
            return true;
        }
    }
    return false;
}