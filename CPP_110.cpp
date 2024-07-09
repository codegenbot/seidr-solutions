bool hasOdd(int x) {
    return (x & 1);
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int x : lst1) {
        if (hasOdd(x)) {
            oddCount++;
        }
    }

    if (oddCount > (lst2.size() / 2)) {
        return "NO";
    } else {
        return "YES";
    }
}