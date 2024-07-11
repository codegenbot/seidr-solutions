Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i : lst1) {
        if (i % 2 != 0)
            oddCount++;
    }
    return oddCount == 0 ? "YES" : "NO";
}