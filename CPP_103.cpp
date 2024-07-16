if (n > m) {
        return "-1";
    }
    int sum = 0;
    int count = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }
    int average = round((double)sum / count);
    string binary_avg = bitset<32>(average).to_string();
    size_t found = binary_avg.find('1');
    return (found != string::npos) ? binary_avg.substr(found) : "0";
}