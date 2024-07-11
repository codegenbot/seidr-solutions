string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i : lst1) {
        if (i % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > (lst2.size() - oddCount)) {
        return "NO";
    } else {
        return "YES";
    }
}