vector<int> result(2, 0);
    
    while (num != 0) {
        if ((num % 10) % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
        num /= 10;
    }
    
    return result;
}