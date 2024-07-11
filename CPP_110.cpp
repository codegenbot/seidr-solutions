Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0) {
            bool found = false;
            for (int y : lst2) {
                if (y % 2 != 0) {
                    swap(lst1[lst1.size() - 1], lst2[find(lst2.begin(), lst2.end(), y) - lst2.begin()]);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}