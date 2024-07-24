int hex_key(string num) {
    int primes_count = 0;
    string primes = "2357BD";
    
    for (char c : num) {
        if (primes.find(c) != string::npos) {
            primes_count++;
        }
    }
    
    return primes_count;
}