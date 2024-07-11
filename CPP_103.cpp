if (n > m) {
    return "-1";
}
int sum = 0;
int count = 0;
for (int i = n; i <= m; ++i) {
    sum += i;
    count++;
}
int average = round((double)sum / count);
return bitset<32>(average).to_string().substr(0, log2(average)+1);