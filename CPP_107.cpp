int count = 0;
    vector<int> palindromes;
    
    for (int i = 1; i <= n; ++i) {
        string numStr = to_string(i);
        string revStr = numStr;
        reverse(revStr.begin(), revStr.end());
        
        if (numStr == revStr) {
            if (i % 2 == 0) {
                count++;
            }
        }
    }
    
    palindromes.push_back(count);
    palindromes.push_back(n - count);
    
    return palindromes;
}