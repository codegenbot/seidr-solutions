```
```
double rounded_avg(int n, int m) {
    if (n > m) return -1.0;
    double sum = 0.0;
    for (int i = n; i <= m; i++) {
        sum += (double)i; 
    }
    double avg = round((sum / (m - n + 1)) * 2.0) / 2.0;
    return avg;
}
```