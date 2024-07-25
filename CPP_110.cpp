bool hasOdd(int num) {
    return num % 2 != 0;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    
    for (int i : lst1) {
        if (hasOdd(i)) {
            oddCount++;
        }
    }
    
    if (oddCount > (lst1.size() - oddCount)) {
        return "NO";
    } else {
        return "YES";
    }
}