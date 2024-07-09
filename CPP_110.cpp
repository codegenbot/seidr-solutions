Here is the completed code:

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
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            int j;
            for (j = 0; j < lst2.size(); j++) {
                if (lst2[j] % 2 != 0) {
                    break;
                }
            }
            if (j == lst2.size()) {
                return "NO";
            }
            swap(lst1[i], lst2[j]);
        }
    }
    return "YES";
}