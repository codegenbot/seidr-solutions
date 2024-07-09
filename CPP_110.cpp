string exchange(vector<int> lst1, vector<int> vector) {
    bool hasOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    if (!hasOdd) {
        return "YES";
    }
    for (int num : vector) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}