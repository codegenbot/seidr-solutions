vector<int> even_odd_palindrome(int n){
    vector<int> result = {0, 0};
    for(int i = 1; i <= n; ++i){
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(), rev.end());
        if(num == rev){
            if(i % 2 == 0){
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}