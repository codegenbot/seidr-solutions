Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 == 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
        }
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}