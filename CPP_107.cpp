vector<int> even_odd_palindrome(int n){
        vector<int> result;
        result.push_back(n / 2); // number of even palindromes
        result.push_back(n - n / 2); // number of odd palindromes
        return result;
    }