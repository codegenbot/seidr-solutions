bool is_prime(long long n){
    if(n <= 1) return false;
    for(int i = 2; std::sqrt(i) <= std::sqrt(n); i++){
        if(n%i == 0) return false;
    }
    // Check 2 as well, since it was missing in the original code
    if(n == 2) return true;
    return true;
}