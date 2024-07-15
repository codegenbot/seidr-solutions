bool isSame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end(), [](int a, int b) {
        int sumA = abs(a), sumB = abs(b);
        while (sumA >= 10) sumA = sumA / 10 + sumA % 10;
        while (sumB >= 10) sumB = sumB / 10 + sumB % 10;
        return sumA == sumB ? a < b : sumA < sumB;
    });
    return a;
}