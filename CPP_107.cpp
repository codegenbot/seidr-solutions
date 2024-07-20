vector<int> even_odd_palindrome(int n){
        int count_even = 0;
        int count_odd = 0;
        
        for(int i=1; i<=n; ++i){
            string forward = to_string(i);
            string backward = forward;
            reverse(backward.begin(), backward.end());
            
            if(forward == backward){
                if(i % 2 == 0){
                    count_even++;
                } else {
                    count_odd++;
                }
            }
        }
        
        return {count_even, count_odd};
    }