int hex_key(string num){
    int count = 0;
    string primes = "2357BD";
    
    for(char digit : num){
        if(primes.find(digit) != string::npos){
            count++;
        }
    }
    
    return count;
}