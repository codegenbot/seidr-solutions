int even_count = 0, odd_count = 0;
    string num_str = to_string(abs(num));
    
    for (char digit : num_str) {
        if ((digit - '0') % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return {even_count, odd_count};
}