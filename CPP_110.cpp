bool isAllEven(vector<int>& lst) {
    for (int num : lst) {
        if (num % 2 != 0) {
            return false;
        }
    }
    return true;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    if (isAllEven(lst1)) {
        return "YES";
    }
    return "NO";
}