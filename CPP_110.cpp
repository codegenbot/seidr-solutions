Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0) {
            int found = false;
            for (int y : lst2) {
                if (y % 2 != 0) {
                    swap(x, y);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}