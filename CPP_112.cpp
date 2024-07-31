for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    string result = s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    bool is_palindrome = (result == reversed) ? true : false;
    
    if (is_palindrome) {
        return {result, "True"};
    } else {
        return {result, "False"};
    }
}