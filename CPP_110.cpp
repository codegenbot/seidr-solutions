bool hasOdd(int x) {
    return x % 2 != 0;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (hasOdd(num)) {
            oddCount++;
        }
    }

    if (oddCount > (lst2.size() - oddCount)) {
        return "NO";
    } else {
        return "YES";
    }
}