Here is the completed code:

int skjkasdkd(vector<int> lst){
    int max_prime = 0;
    for(int i:lst) {
        if(i > 1) {
            bool is_prime = true;
            for(int j=2; j*j<=i && is_prime; j++) {
                if(i%j == 0) {
                    is_prime = false;
                }
            }
            if(is_prime) {
                max_prime = i;
                break;
            }
        }
    }
    int sum_of_digits = 0;
    while(max_prime > 0) {
        sum_of_digits += max_prime % 10;
        max_prime /= 10;
    }
    return sum_of_digits;