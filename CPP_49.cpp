int result = 1;
    for(int i = 0; i < n; i++){
        result = (result * 2) % p;
    }
    return result;
}