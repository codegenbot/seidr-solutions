string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i : lst1) {
        if (i % 2 != 0) return "NO";
    }
    for (int i : lst2) {
        bool found = false;
        for (int j : lst1) {
            if (j == i) {
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}