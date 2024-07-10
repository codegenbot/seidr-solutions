string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount > 0 && all_of(lst2.begin(), lst2.end(), [](int x) { return x % 2 == 0 })) ? "NO" : "YES";
}