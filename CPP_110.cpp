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
        bool foundOddInLst2 = false;
        for (int num : lst2) {
            if (num % 2 != 0 && !foundOddInLst2) {
                foundOddInLst2 = true;
            } else if (num % 2 == 0 && foundOddInLst2) {
                return "YES";
            }
        }
        if (!foundOddInLst2) {
            return "NO";
        } else {
            return "YES";
        }
    }
}