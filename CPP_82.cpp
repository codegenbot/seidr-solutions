int main() {
    assert(prime_length("0") == false);
    bool result = prime_length("123");
    cout << "The length of the string is a prime number: " << result << endl;
    return 0;
}

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