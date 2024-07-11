bool hasOdd(int x) { return x % 2; }
string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) if (!hasOdd(x)) return "YES";
    int oddCount = 0;
    for (int x : lst2) if (hasOdd(x)) oddCount++;
    return oddCount == 0 ? "YES" : "NO";
}