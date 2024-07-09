string exchange(vector<int> lst1, vector<int> lst2) {
    bool canMakeEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            canMakeEven = false;
            break;
        }
    }
    if (!canMakeEven) return "NO";
    return "YES";
}