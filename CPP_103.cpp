int sum = 0;
int count = 0;
if (n > m) {
    return "-1";
}
for (int i = n; i <= m; i++) {
    sum += i;
    count++;
}
int avg = round((double)sum / count);
string binary_avg = bitset<32>(avg).to_string();
int nearest_int = 0;
for (int i = 0; i < binary_avg.size(); i++) {
    if (binary_avg[i] == '1') {
        nearest_int = i;
        break;
    }
}
return binary_avg.substr(0, nearest_int + 1);
}