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
return bitset<sizeof(int)*8>(avg).to_string();
}