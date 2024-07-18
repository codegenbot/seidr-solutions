std::vector<int> even_odd_palindrome(int n){
    if (n == 0) {
        return {0};
    } else {
        std::vector<int> palindrome = {0};
        for (int i = 1; i <= n; ++i) {
            palindrome.insert(palindrome.begin(), i);
            palindrome.push_back(i);
        }
        return palindrome;
    }
}