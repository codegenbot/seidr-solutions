vector<int> count_palindrome;
    for(int i=1; i<=n; ++i){
        if(to_string(i) == string(to_string(i).rbegin(), to_string(i).rend())){
            if(i % 2 == 0){
                count_palindrome[0]++;
            } else{
                count_palindrome[1]++;
            }
        }
    }
    return count_palindrome;
}