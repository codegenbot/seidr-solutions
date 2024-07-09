Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int num : lst2) {
        bool found = false;
        for (int num2 : lst1) {
            if (num == num2) {
                found = true;
                break;
            }
        }
        if (!found) return "NO";
    }
    return "YES";
}