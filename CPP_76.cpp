if(x == 1) return true;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i == 0){
            int count = 0;
            while(x%i == 0){
                x = x/i;
                count++;
            }
            if(x == 1 && count%n == 0) return true;
            else return false;
        }
    }
    return x == 1;
}