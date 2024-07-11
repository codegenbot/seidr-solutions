if(n > m) {
    return "-1";
}

int sum = 0;
int count = 0;
for(int i = n; i <= m; i++) {
    sum += i;
    count++;
}

int avg = round((double)sum / count);
string binaryAvg = bitset<32>(avg).to_string();
return binaryAvg.substr(binaryAvg.find('1'));
}