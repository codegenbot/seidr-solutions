Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0 && find(lst2.begin(), lst2.end(), num) == lst2.end()) {
            return "NO";
        }
    }
    return "YES";
}