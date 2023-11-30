string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount <= lst2.size()) ? "YES" : "NO";
}