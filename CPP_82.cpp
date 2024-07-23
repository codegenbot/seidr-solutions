bool prime_length(string str){
    int n = str.length();
    bool is_prime = true;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }
    
    return is_prime;

}

int main() {
    assert(prime_length("0") == false);
    // add more test cases here
    return 0;
}