Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int i : lst1) {
        if (i % 2 == 0)
            evenCount++;
    }
    int oddCount = lst1.size() - evenCount;
    for (int i : lst2) {
        if (i % 2 != 0 && oddCount > 0) {
            oddCount--;
        } else if (i % 2 == 0 && evenCount < lst1.size()) {
            evenCount++;
        }
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}