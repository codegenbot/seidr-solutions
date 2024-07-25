int len = str.length();
    if(len < 2) return false;
    for(int i=2; i*i<=len; i++){
        if(len % i == 0) return false;
    }
    return true;
}