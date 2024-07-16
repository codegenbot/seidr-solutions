int evenCount = 0, oddCount = 0;
    string strNum = to_string(abs(num));
    
    for (char digit : strNum) {
        if (digit - '0' % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}