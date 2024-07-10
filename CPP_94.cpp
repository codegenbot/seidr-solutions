int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for (int num : lst) {
        if (num <= 1) {
            continue;
        }
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime && num > max_prime) {
            max_prime = num;
        }
    }
    int sum_of_digits = 0;
    while (max_prime > 0) {
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_of_digits;
}