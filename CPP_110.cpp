string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    if (evenCount == lst1.size()) {
        return "YES";
    }

    bool canMakeEven = false;
    for (int num : lst2) {
        if (num % 2 == 0) {
            evenCount++;
            canMakeEven = true;
        }
    }

    if (canMakeEven && evenCount == lst1.size()) {
        return "YES";
    }

    return "NO";
}