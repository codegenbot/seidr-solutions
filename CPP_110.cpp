Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool possible = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            possible = false;
            break;
        }
    }
    return possible ? "YES" : "NO";
}