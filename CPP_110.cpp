string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int i = 0; i < lst1.size(); i++) {
        bool found = false;
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] == lst2[j]) {
                found = true;
                lst2.erase(lst2.begin() + j);
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}