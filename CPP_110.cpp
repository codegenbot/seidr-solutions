Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0) {
            return "NO";
        }
    }
    for (int y : lst2) {
        bool found = false;
        for (int x : lst1) {
            if (y == x) {
                found = true;
                break;
            }
        }
        if (!found) {
            return "NO";
        }
    }
    return "YES";
}