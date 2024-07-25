string exchange(vector<int> lst1, vector<int> lst2) {
    int even = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even++;
        }
    }
    if (even == lst1.size()) {
        return "YES";
    } else {
        bool foundOddInLst2 = false;
        for (int num : lst2) {
            if (num % 2 != 0 && !foundOddInLst2) {
                foundOddInLst2 = true;
            }
        }
        return foundOddOdd ? "YES" : "NO";
    }
}