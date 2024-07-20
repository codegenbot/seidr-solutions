string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > lst2.size()) {
        return "NO";
    }
    for (int i = 0; i < oddCount; i++) {
        bool found = false;
        for (int num : lst2) {
            if (num % 2 != 0) {
                swap(lst1[i], num);
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