string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0 && find(lst2.begin(), lst2.end(), x) == lst2.end())
            return "NO";
    }
    return "YES";
}