Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int odd_count = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            odd_count++;
        }
    }
    if (odd_count > (lst1.size() - odd_count)) {
        return "NO";
    } else {
        return "YES";
    }
}