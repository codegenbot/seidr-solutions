Here is the completed code:

bool is_equal_to_sum_even(int n){
    for(int i=2; i<=n/2; i+=2){
        int sum = 0;
        for(int j=i; j<=n/2; j+=2){
            if(sum + 2*j > n) break;
            sum += 2*j;
            if(sum == n) return true;
        }
    }
    return false;
}