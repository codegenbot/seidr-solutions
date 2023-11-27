vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        string num = to_string(i);
        int len = num.length();
        bool odd = len % 2 == 1;
        bool palindrome = true;
        for (int j = 0; j < len / 2; j++) {
            if (num[j] != num[len - 1 - j]) {
                palindrome = false;
                break;
            }
        }
        if (palindrome) {
            if (odd) {
                result[1]++;
            } else {
                result[0]++;
            }
        }
    }
    return result;
}