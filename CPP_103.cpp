if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    
    string binaryAvg = bitset<64>(avg).to_string();
    
    size_t found = binaryAvg.find('1');
    if (found != string::npos) {
        return binaryAvg.substr(found);
    }
    
    return "0";
}