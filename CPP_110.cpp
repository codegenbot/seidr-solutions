string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    } else {
        bool foundOddInLst2 = false;
        for (int num : lst2) {
            if (num % 2 != 0) {
                foundOddInLst2 = true;
                break;
            }
        }
        if (!foundOddInLst2) {
            return "YES";
        } else {
            return "NO";
        }
    }
}