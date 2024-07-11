if (n > m) {
    return "-1";
}

int sum = 0;
for (int i = n; i <= m; ++i) {
    sum += i;
}

int avg = sum / (m - n + 1);

string binary = "";
while (avg > 0) {
    if (avg % 2 == 0) {
        binary = "0" + binary;
    } else {
        binary = "1" + binary;
    }
    avg /= 2;
}

return binary;
}