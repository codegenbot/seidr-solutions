if(a < 30) return false;
    for(int i=2; i<=a/3; i++){
        for(int j=i+1; j<=a/2; j++){
            int k = a / (i * j);
            if(i*j*k == a && k > j && is_prime(i) && is_prime(j) && is_prime(k)){
                return true;
            }
        }
    }
    return false;
}