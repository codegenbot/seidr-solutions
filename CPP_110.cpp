Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }
    if (oddCount <= lst2.size()) {
        return "YES";
    } else {
        return "NO";
    }
}