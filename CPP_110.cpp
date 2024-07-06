Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i : lst1) {
        if (i % 2 != 0) {
            oddCount++;
        }
    }
    for (int i : lst2) {
        while (oddCount > 0 && !lst1.empty() && lst1.back() % 2 != 0) {
            lst1.pop_back();
            oddCount--;
        }
        if (!lst1.empty()) {
            lst1.push_back(i);
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}