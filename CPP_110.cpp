Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool even = false;
    for (int i : lst1) {
        if (i % 2 != 0) {
            even = true;
            break;
        }
    }
    if (!even) {
        return "YES";
    } else {
        int oddCount = 0;
        for (int i : lst2) {
            if (i % 2 != 0) {
                oddCount++;
            }
        }
        if (oddCount == 0 || oddCount == lst1.size()) {
            return "NO";
        } else {
            return "YES";
        }
    }
}