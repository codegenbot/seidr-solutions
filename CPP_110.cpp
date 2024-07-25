string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int i = 0; i < oddCount; i++) {
        bool found = false;
        for (int j = 0; j < lst2.size(); j++) {
            if (lst2[j] % 2 != 0) {
                swap(lst1[i], lst2[j]);
                found = true;
                break;
            }
        }
        if (!found) {
            return "NO";
        }
    }
    return "YES";
}