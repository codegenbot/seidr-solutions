sort(arr.begin(), arr.end(), [](int a, int b) {
    int countA = __builtin_popcount(abs(a));
    int countB = __builtin_popcount(abs(b));
    if (countA == countB) {
        return a < b;
    }
    return countA < countB;
});
return arr;