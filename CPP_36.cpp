int fizz_buzz(int n){
    int count = 0;
    for (int i = 11; i < n; i += 11) {
        if (i % 13 == 0 || i % 11 == 0) {
            int num = i;
            while (num > 0) {
                if (num % 10 == 7) {
                    count++;
                }
                num /= 10;
            }
        }
    }
    return count;
}