Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    for (int i = 0; i < oddCount; i++) {
        bool found = false;
        for (int num : lst2) {
            if (num % 2 != 0) {
                swap(lst1[oddCount - i - 1], lst2[lst2.size() - 1]);
                found = true;
                break;
            }
        }
        if (!found) {
            return "NO";
        }
    }
    return "YES";
}