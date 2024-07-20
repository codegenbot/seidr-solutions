string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int i = 0; i < lst2.size(); i++) {
        for (int j = i + 1; j < lst2.size(); j++) {
            if ((lst2[i] % 2 == 0 && num % 2 != 0) || (lst2[j] % 2 != 0 && num % 2 == 0)) return "YES";
        }
    }
    return "NO";
}