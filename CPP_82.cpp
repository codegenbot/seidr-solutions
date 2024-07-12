```cpp
bool prime_length(const char* str){
    bool foundDigit = false;
    std::string s = "";
    for(int i = 0; str[i]; i++) {
        char c = str[i];
        if(c >= '0' && c <= '9') {
            int n = c - '0'; 
            if(isPrime(n)) { 
                if(foundDigit) s += std::to_string(n); 
                else foundDigit = true;
            } else {
                if(foundDigit) s.push_back((char)(n + '0')); // Fix 1
                else continue; // Ignore non-digit characters when no digit is found yet
            }
        } else {
            if(foundDigit) s.push_back(c); // Fix 2
            else continue; // Ignore non-digit characters when no digit is found yet
        }
    }
    return s.length() > 1;
}