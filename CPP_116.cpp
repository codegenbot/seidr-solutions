sort(arr.begin(), arr.end(), [](const int &a, const int &b) {
    int countA = __builtin_popcount(a);
    int countB = __builtin_popcount(b);
    if (countA == countB) {
        return a < b;
    }
    return countA < countB;
});
return arr;
}