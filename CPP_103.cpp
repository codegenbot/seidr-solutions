if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    int count = m - n + 1;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int rounded_avg = round((double)sum / count);
    string binary_representation = bitset<32>(rounded_avg).to_string();
    
    return binary_representation.substr(binary_representation.find('1'));
}