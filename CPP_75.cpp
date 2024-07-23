bool is_multiply_prime(int a) {
    for (int i = 2; i <= 100; i++) {
        int temp = i;
        bool prime = true;
        for (int j = 2; j * j <= temp; j++) {
            if (temp % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            for (int k = 2; k <= 100; k++) {
                int temp2 = k;
                bool prime2 = true;
                for (int l = 2; l * l <= temp2; l++) {
                    if (temp2 % l == 0) {
                        prime2 = false;
                        break;
                    }
                }
                if (prime2 && a / i / k == temp) {
                    return true;
                }
            }
        }
    }
    return false;
}