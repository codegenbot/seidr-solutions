bool is_multiply_prime(int a) {
    bool flag = true;
    for (int i = 2; i <= 100; i++) {
        if (a % i == 0) {
            int temp = i;
            for (; temp * temp <= a; temp++) {
                if (temp % i != 0) {
                    break;
                }
            }
            if (temp * temp > a) {
                int j = i + 1;
                while (j <= 100) {
                    if (a % j == 0) {
                        int k = j;
                        for (; k * k <= a; k++) {
                            if (k % j != 0) {
                                break;
                            }
                        }
                        if (k * k > a) {
                            int l = j + 1;
                            while (l <= 100) {
                                if (a % l == 0) {
                                    flag = false;
                                    return flag;
                                }
                                l++;
                            }
                        } else {
                            flag = false;
                            return flag;
                        }
                    }
                    j++;
                }
            } else {
                flag = false;
                return flag;
            }
        }
    }
    return flag;
}