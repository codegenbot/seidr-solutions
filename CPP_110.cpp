Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int num : lst2) {
        if (num % 2 == 0 && oddCount > 0) {
            return "YES";
        } else if (num % 2 != 0) {
            oddCount--;
        }
    }
    if (oddCount == 0) {
        return "YES";
    } else {
        return "NO";
    }
}