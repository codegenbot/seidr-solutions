string x_str = to_string(x);
    int n = x_str.length();
    
    if (shift >= n) {
        reverse(x_str.begin(), x_str.end());
    } else {
        rotate(x_str.rbegin(), x_str.rbegin() + shift, x_str.rend());
    }
    
    return x_str;
}