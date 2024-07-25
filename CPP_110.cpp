Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0) return "NO";
    }
    return "YES";
}