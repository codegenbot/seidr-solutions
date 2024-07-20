Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool canMakeEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool foundOddInLst2 = false;
            for (int otherNum : lst2) {
                if (otherNum % 2 != 0) {
                    lst2.erase(remove(lst2.begin(), lst2.end(), otherNum), lst2.end());
                    foundOddInLst2 = true;
                    break;
                }
            }
            if (!foundOddInLst2) {
                canMakeEven = false;
                break;
            }
        }
    }
    return canMakeEven ? "YES" : "NO";
}