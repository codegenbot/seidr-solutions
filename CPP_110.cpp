Here's the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); ++i) {
        if (lst1[i] % 2 != 0 && find(lst2.begin(), lst2.end(), lst1[i]) == lst2.end()) {
            return "NO";
        }
    }
    return "YES";
}