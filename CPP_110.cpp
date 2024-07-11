Here's the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0 && !any_of(lst2.begin(), lst2.end(), [num](int x) { return x == num; })) {
            return "NO";
        }
    }
    return "YES";
}