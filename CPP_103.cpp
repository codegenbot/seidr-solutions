std::string rounded_avg(int n, int m, std::string& binary) {
    if (n > m) return "-1";
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = static_cast<double>(sum) / (m - n + 1);
    avg = std::nearbyint(avg + 0.5); 
    while (avg > 0) {
        binary = ((static_cast<int>(avg)) & 1) ? "1" + binary : "0" + binary;
        avg /= 2;
    }
    if (binary.empty()) binary = "0";
    std::reverse(binary.begin(), binary.end());
    return binary;
}