if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    
    string binary_avg = bitset<32>(avg).to_string();
    
    size_t found = binary_avg.find('1');
    if (found != string::npos) {
        return binary_avg.substr(found);
    }
    
    return "0";
}