vector<int> even_odd_palindrome(int n){
        vector<int> res;
        res.push_back(n / 2 + n % 2);
        res.push_back(n / 2);
        return res;
    }