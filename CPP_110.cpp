Here's the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i : lst1) {
        if (i % 2 != 0)
            return "NO";
    }
    for (int i = 0; i < lst2.size(); i++) {
        for (int j = 0; j < lst1.size(); j++) {
            if (lst2[i] == lst1[j]) {
                lst2.erase(lst2.begin() + i);
                break;
            }
        }
    }
    return "YES";
}