if(x == 1){
        return true;
    }
    
    for(int i=2; i<=sqrt(x); i++){
        int temp = i;
        while(temp <= x){
            if(temp == x){
                return true;
            }
            temp *= i;
        }
    }
    
    return false;
}