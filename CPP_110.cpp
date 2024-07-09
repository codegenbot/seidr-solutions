string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount == 0) {
        return "YES";
    } else {
        for (int num : lst2) {
            if (std::find(lst1.begin(), lst1.end(), num) != lst1.end()) {
                continue;
            }
            if (num % 2 == 0) {
                oddCount--;
                if (oddCount == 0) {
                    return "YES";
                }
            } else {
                return "NO";
            }
        }
    }
    return "NO";
}