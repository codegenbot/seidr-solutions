int countOdd(vector<int>& lst) {
    int count = 0;
    for (int num : lst) {
        if (num % 2 != 0) {
            count++;
        }
    }
    return count;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    if (countOdd(lst1) > 0) {
        return "NO";
    }
    return "YES";
}