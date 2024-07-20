Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int i : lst1) {
        if (i % 2 == 0) {
            evenCount++;
        }
    }

    if (evenCount == lst1.size()) {
        return "YES";
    }

    bool foundOdd = false;
    for (int i : lst2) {
        if (i % 2 != 0) {
            foundOdd = true;
            break;
        }
    }

    if (!foundOdd) {
        return "YES";
    }

    return "NO";
}