string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
        for (int other : lst2) {
            if (other == num) {
                return "YES";
            }
        }
    }
    return "NO";
}