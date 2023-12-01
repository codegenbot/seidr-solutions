int digits(int n){
    int product = 1;
    string num = to_string(n);
    
    for (char c : num) {
        int digit = c - '0';
        if (digit % 2 == 1) {
            product *= digit;
        }
    }
    
    if (product == 1) {
        return 0;
    } else {
        return product;
    }
}