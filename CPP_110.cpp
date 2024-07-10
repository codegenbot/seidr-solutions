Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int num : lst2) {
        bool found = false;
        for (int &n : lst1) {
            if (n == num) {
                n = -1; // mark as exchanged
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}