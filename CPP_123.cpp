std::vector<int> get_odd_collatz(int n) {
    std::vector<int> sequence;
    
    while (n != 1) {
        sequence.push_back(n);
        
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    
    sequence.push_back(1);
    
    return sequence;
}