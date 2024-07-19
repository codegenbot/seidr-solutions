vector<int> res;
    for (int num : x) {
        bool has_even_digit = false;
        int n = num;
        while (n > 0) {
            if (n % 2 == 0) {
                has_even_digit = true;
                break;
            }
            n /= 10;
        }
        if (!has_even_digit) {
            res.push_back(num);
        }
    }
    
    sort(res.begin(), res.end());
    
    return res;
}