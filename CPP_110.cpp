Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
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
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}