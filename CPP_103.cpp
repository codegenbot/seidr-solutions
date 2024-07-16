if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round(sum / (m - n + 1.0));
    
    string binaryAvg = bitset<32>(avg).to_string();
    size_t pos = binaryAvg.find('1');
    if (pos != string::npos) {
        return binaryAvg.substr(pos);
    } else {
        return "0";
    }
}