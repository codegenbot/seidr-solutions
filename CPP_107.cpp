vector<int> even_odd_palindrome(int n){
    int even = 0, odd = 0;
    for (int i = 1; i <= n; ++i) {
        if (is_palindrome(i)) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    return {even, odd};
}

bool is_palindrome(int num) {
    int temp = num;
    int rev = 0;
    while(temp != 0) {
        int remainder = temp % 10;
        rev = (rev * 10) + remainder;
        temp /= 10;
    }
    return (num == rev);
}