string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int num : lst2) {
        bool found = false;
        for (int x : lst1) {
            if (x == num) {
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}