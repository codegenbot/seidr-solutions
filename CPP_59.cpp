int i;
    for(i = 2; i <= n; i++){
        if(n % i == 0){
            n /= i;
            i--;
        }
    }
    return i;
}