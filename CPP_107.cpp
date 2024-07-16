vector<int> even_odd_palindrome(int n){
        vector<int> result(2, 0);
        for(int i=1; i<=n; i++){
            string str = to_string(i);
            string rev_str = string(str.rbegin(), str.rend());
            if(str == rev_str){
                if(i % 2 == 0){
                    result[0]++;
                } else {
                    result[1]++;
                }
            }
        }
        return result;
    }