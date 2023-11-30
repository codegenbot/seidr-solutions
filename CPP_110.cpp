string exchange(vector<int> lst1, vector<int> lst2) {
    int countOdd = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            countOdd++;
    }
    return (countOdd == 0) ? "YES" : "NO";
}