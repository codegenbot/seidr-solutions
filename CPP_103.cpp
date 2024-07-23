if (n > m) {
    return "-1";
}

int sum = 0;
int count = 0;
for (int i = n; i <= m; i++) {
    sum += i;
    count++;
}

int avg = round(sum / count);
string binary = bitset<32>(avg).to_string();
size_t found = binary.find('1');
return binary.substr(found);