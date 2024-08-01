Here's the solution:

bool is_multiply_prime(int a){
    bool prime[100] = {false};
    for (int i = 2; i < 100; ++i) {
        if (!prime[i]) {
            for (int j = i * i; j < 100; j += i) {
                prime[j] = true;
            }
        }
    }

    for (int i = 2; i <= a; ++i) {
        int temp = a / i;
        while (temp > 0 && !prime[temp]) {
            --temp;
        }
        if (temp > 0 && temp * i == a) {
            return true;
        }
    }

    return false;
}