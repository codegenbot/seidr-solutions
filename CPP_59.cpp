int i;
    for(i = 2; i <= n/i; i++){
        while(n % i == 0)
            n /= i;
    }
    return n;
}