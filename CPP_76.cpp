if(x == 1) return true;
    for(int i = 2; i <= sqrt(x); i++){
        int p = i;
        while(p <= x){
            p *= i;
            if(p == x && p % i == 0) return true;
        }
    }
    return false;
}