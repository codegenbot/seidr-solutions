if(a < 30) return false;
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            for(int j = i + 1; j < a; j++){
                if(a % j == 0 && a % (a / j) == 0){
                    return true;
                }
            }
        }
    }
    return false;
}