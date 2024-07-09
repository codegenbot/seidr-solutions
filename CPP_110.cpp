string exchange(vector<int> lst1, vector<int> lst2) {
    bool possible = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            break;
        }
    }
    for (int i = 0; i < lst1.size(); i++) {
        int found = false;
        for (int j = 0; j < lst2.size(); j++) {
            if (lst1[i] == lst2[j]) {
                found = true;
                swap(lst2[j], lst2[--j]);
            }
        }
        if (!found) {
            possible = true;
            break;
        }
    }
    return possible ? "YES" : "NO";
}