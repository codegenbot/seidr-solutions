Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    for (int i = 0; i < lst2.size(); i++) {
        for (int j = 0; j < lst1.size(); j++) {
            if (lst2[i] == lst1[j]) {
                lst1.erase(lst1.begin() + j);
                break;
            }
        }
    }
    return "YES";
}