if (n > m) {
    return "-1";
}
int sum = 0;
for (int i = n; i <= m; i++) {
    sum += i;
}
int avg = (int)round((double)sum / (m - n + 1));
return bitset<32>(avg).to_string();
}