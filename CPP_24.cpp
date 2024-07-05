for(int i = n/2; i >= 1; --i) {
        if(n % i == 0) {
            return i;
        }
    }
    return 1; // This line is theoretically never reached for n > 1
}