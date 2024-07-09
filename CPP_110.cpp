string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    bool canMakeEven = false;
    for (int num : lst2) {
        if (!canMakeEven && num % 2 != 0) {
            continue;
        }
        for (int otherNum : lst1) {
            if (otherNum % 2 == 0 && num % 2 != 0) {
                swap(otherNum, num);
                canMakeEven = true;
                break;
            }
        }
    }

    return evenCount == lst1.size() ? "YES" : "NO";
}