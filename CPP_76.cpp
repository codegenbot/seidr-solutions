if(x == 1) return true;
    for(int i = 1; i <= sqrt(x); i++){
        if(pow(n, i) == x) return true;
    }
    return false;
}