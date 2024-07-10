string rounded_avg(int n, int m) {
    double avg = (n + m) / 2.0;
    int rounded_avg = round(avg);
    return bitset<32>(rounded_avg).to_string().substr(32 - ceil(log2(rounded_avg)));
}