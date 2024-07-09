string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int i = 0; i < lst2.size(); ) {
        for (int j = 0; j < lst1.size() && i < lst2.size(); ) {
            if (lst2[i] % 2 == 0 && lst1[j] % 2 != 0) {
                swap(lst1[j], lst2[i]);
                break;
            }
            j++;
        }
        i++;
    }
    return "YES";
}