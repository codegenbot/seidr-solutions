if(n > m) {
    return "-1";
}
int total = 0;
for(int i = n; i <= m; i++) {
    total += i;
}
int avg = total / (m - n + 1);
string binary_avg = "";
while(avg > 0) {
    binary_avg = to_string(avg % 2) + binary_avg;
    avg /= 2;
}
return binary_avg;
}