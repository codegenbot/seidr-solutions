if(x == 1){
        return true;
    }
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0){
            int temp = x;
            while(temp % i == 0){
                temp /= i;
            }
            if(temp == 1 && i % n == 0){
                return true;
            }
        }
    }
    return false;
}