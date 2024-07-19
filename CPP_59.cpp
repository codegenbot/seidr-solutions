int largest_prime_factor(int n) {
    if (n <= 1) {
        return -1; // Error handling for invalid input
    }

    int factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    assert(largest_prime_factor(13195) == 29); // Test case
    
    return 0;
}