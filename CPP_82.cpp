int main() {
    assert(prime_length("0") == false);
    bool prime_length(string str){
        int len = str.length();
        bool is_prime = true;

        for(int i=2; i*i<=len; i++){
            if(len%i==0){
                is_prime = false;
                break;
            }
        }

        return is_prime;
    }
    return 0;
}