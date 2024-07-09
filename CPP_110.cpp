Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    if (evenCount == lst1.size())
        return "YES";
    bool foundOddInLst1 = false;
    for (int num : lst2) {
        if (num % 2 != 0) {
            if (!foundOddInLst1) {
                foundOddInLst1 = true;
                continue;
            }
            return "NO";
        }
    }
    return "YES";
}