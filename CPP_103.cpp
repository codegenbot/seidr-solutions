if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round(sum / static_cast<double>(m - n + 1));
    
    string binaryAvg = bitset<sizeof(avg) * 8>(avg).to_string();
    
    return binaryAvg.substr(binaryAvg.find('1'));
}