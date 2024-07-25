Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > 0 && find(lst2.begin(), lst2.end(), oddCount) != lst2.end()) {
        return "YES";
    } else {
        return "NO";
    }
}