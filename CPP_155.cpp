int even_odd_count(int n) {
    int even = 0, odd = 0;
    
    while (n != 0) {
        if (n % 2 == 0)
            even++;
        else
            odd++;
        
        n /= 10;
    }
    
    return even > odd ? 1 : 0;
}