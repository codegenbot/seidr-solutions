string exchange(vector<int> lst1, vector<int> lst2) {
    bool canBeEven = false;
    for (int num : lst1) {
        if (num % 2 == 0) {
            canBeEven = true;
            break;
        }
    }
    if (!canBeEven) return "NO";
    
    for (int num : lst1) {
        bool foundInLst2 = false;
        for (int otherNum : lst2) {
            if (num % 2 != 0 && otherNum == num) {
                foundInLst2 = true;
                break;
            }
        }
        if (!foundInLst2) return "NO";
    }

    return "YES";
}