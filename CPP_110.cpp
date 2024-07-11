string exchange(vector<int> lst1, vector<int> lst2) {
    bool canMakeEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            canMakeEven = false;
            break;
        }
    }
    if (!canMakeMakeEven) return "NO";
    int oddCount = 0, evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) evenCount++;
        else oddCount++;
    }
    if (oddCount > evenCount) return "NO";
    return "YES";
}