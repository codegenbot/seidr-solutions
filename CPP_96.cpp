bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int count_up_to(vector<int> primes, int x){
    int count = 0;
    for(int prime : primes){
        if(prime <= x){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}