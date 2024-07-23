if(n > m) {
    return "-1";
}

int sum = 0;
for(int i = n; i <= m; i++) {
    sum += i;
}

int avg = round(sum / (m - n + 1.0));
string avg_binary = bitset<sizeof(int)*8>(avg).to_string();
return avg_binary.substr(1, avg_binary.size() - 1);