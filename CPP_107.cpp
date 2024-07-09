vector<int> even_odd_palindrome(int n){
    vector<int> result(2);
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        if(s == reverse(s).s){
            if(stoi(s) % 2 == 0)
                result[0]++;
            else
                result[1]++;
        }
    }
    return result;
}