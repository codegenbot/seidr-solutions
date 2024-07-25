long long doubleTheDifference(vector<int> a) {
    sort(a.begin(), a.end());
    int minEven = a[0], maxOdd = a[a.size() - 1];
    long long result = (long long)maxOdd - minEven;
    return result;
}