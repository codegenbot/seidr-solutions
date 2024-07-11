bool hasOdd(int num) {
    return (num & 1);
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (hasOdd(num)) {
            oddCount++;
        }
    }

    if (oddCount == 0) {
        return "YES";
    } else {
        for (int num : lst2) {
            if (hasOdd(num)) {
                oddCount--;
                break;
            }
        }
        if (oddCount == 0) {
            return "YES";
        } else {
            return "NO";
        }
    }
}