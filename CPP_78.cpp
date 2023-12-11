```cpp
int hex_key(string num) {
    if (!std::all_of(num.begin(), num.end(), [](char c){ return std::isdigit(c); }))
        throw std::invalid_argument("Invalid input string");
    
    int count = 0;
    for (int i = 0; i < num.length(); i++) {
        char c = num[i];
        if (isPrime(c - '0')) count++;
    }
    return count;
}
```