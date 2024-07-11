Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) return "YES";
    bool foundOdd = false;
    for (int num : lst2) {
        if (num % 2 != 0) {
            if (!foundOdd) {
                foundOdd = true;
            } else {
                return "NO";
            }
        }
    }
    return "YES";
}