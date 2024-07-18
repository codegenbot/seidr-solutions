bool is_multiply_prime(int a){
    if(a < 30) return false;
    for(int i=2; i<a/2; i++){
        if(a%i == 0){
            for(int j=i+1; j<a/2; j++){
                if(a%(i*j) == 0 && a/(i*j) != 1 && a/(i*j) != i && a/(i*j) != j){
                    return true;
                }
            }
        }
    }
    return false;
}