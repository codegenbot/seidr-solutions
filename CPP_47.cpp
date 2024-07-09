Here is the solution:

vector<float> sorted = l;
sort(sorted.begin(), sorted.end());
int n = sorted.size();
if (n % 2 == 1) {
    return sorted[n / 2];
} else {
    return (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;
}