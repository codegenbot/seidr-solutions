Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool allEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    return allEven ? "YES" : "NO";
}