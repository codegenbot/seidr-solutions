if(n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    
    int avg = round((double)sum / count);
    string binary_avg = bitset<32>(avg).to_string();
    size_t pos = binary_avg.find("1");
    
    return pos == string::npos ? "0" : binary_avg.substr(pos);
}