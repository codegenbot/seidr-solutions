bool hasOdd(int x) {
    return (x & 1);
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i : lst1) {
        if (hasOdd(i)) {
            oddCount++;
        }
    }
    return (oddCount == 0) ? "YES" : "NO";
}