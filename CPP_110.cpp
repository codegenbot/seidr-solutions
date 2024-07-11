string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > (lst2.size() - oddCount)) {
        return "NO";
    } else {
        return "YES";
    }
}