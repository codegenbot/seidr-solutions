int evenCount = 0, oddCount = 0;
    for(int i = 1; i <= n; ++i){
        string numStr = to_string(i);
        string revStr(numStr.rbegin(), numStr.rend());
        if(numStr == revStr){
            if(i % 2 == 0){
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    return {evenCount, oddCount};
}