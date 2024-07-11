Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool allEven = true;
    for (int i : lst1) {
        if (i % 2 != 0) {
            allEven = false;
            break;
        }
    }
    return allEven ? "YES" : "NO";
}