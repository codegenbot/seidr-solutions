if (a <= 1 || a > 99)
        return false;
    
    int prime_factors = 0;
    for (int i = 2; i <= a; ++i) {
        if (a % i == 0) {
            int count = 0;
            while (a % i == 0) {
                a /= i;
                count++;
            }
            if (count == 1) // Check if the factor is prime
                prime_factors++;
            else
                return false; // If factor appears more than once, return false
        }
    }
    
    return prime_factors == 3;