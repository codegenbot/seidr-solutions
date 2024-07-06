string exchange(vector<int> lst1, vector<int> lst2) {
    bool possible = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            possible = false;
            break;
        }
    }
    if (!possible) {
        return "NO";
    } else {
        for (int num : lst1) {
            while (find(lst2.begin(), lst2.end(), num) != lst2.end()) {
                lst2.erase(remove(lst2.begin(), lst2.end(), num), lst2.end());
            }
        }
        return possible ? "YES" : "NO";
    }
}