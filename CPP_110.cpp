string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        if (num % 2 != 0 && evenCount > 0)
            return "YES";
        else if (num % 2 != 0)
            return "NO";
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}