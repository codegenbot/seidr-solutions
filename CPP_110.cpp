string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0 && !binary_search(lst2.begin(), lst2.end(), x)) {
            return "NO";
        }
    }
    return "YES";
}