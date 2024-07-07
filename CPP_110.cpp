string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int i = 0; i < lst2.size(); i++) {
        int found = 0;
        for (int j = 0; j < lst1.size(); j++) {
            if (lst2[i] == lst1[j]) {
                found = 1;
                break;
            }
        }
        if (found) continue;
        if (lst2[i] % 2 != 0) return "NO";
    }
    return "YES";
}