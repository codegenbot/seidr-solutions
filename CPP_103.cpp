string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
  
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
  
    int avg = sum / (m - n + 1);
  
    return bitset<8>(avg).to_string();
}