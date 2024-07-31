if (n > m) {
    return "-1";
}

int sum = 0;
int count = 0;

for (int i = n; i <= m; ++i) {
    sum += i;
    count++;
}

int avg = round((double)sum / count);

string binaryAvg = "";
while (avg > 0) {
    binaryAvg = to_string(avg % 2) + binaryAvg;
    avg /= 2;
}

return binaryAvg;
}