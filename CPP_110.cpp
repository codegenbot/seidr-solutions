string exchange(vector<int> lst1, vector<int> lst2) {
    bool possible = false;
    for (int i : lst1) {
        if (i % 2 != 0) {
            for (int j : lst2) {
                if (j % 2 == 0) {
                    swap(i, j);
                    possible = true;
                    break;
                }
            }
            if (!possible) return "NO";
        }
    }
    return "YES";
}