Here is the completed code:

bool prime_length(string str){
    for(int p=2; ; ++p) {
        bool is_prime = true;
        for(int i=2; i*i<=p; ++i) {
            if(p%i == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            return str.length() == p;
        }
    }
}