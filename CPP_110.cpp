string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0 && !count(lst2.begin(), lst2.end(), num)) {
            return "NO";
        }
    }
    return "YES";
}