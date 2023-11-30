string exchange(vector<int> lst1, vector<int> lst2) {
    // Count the number of odd numbers in lst1
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    
    // If lst1 already has all even numbers, return "YES"
    if (oddCount == 0) {
        return "YES";
    }
    
    // Otherwise, check if there are enough odd numbers in lst2 to replace the odd numbers in lst1
    int oddCountInLst2 = 0;
    for (int num : lst2) {
        if (num % 2 != 0) {
            oddCountInLst2++;
        }
    }
    
    if (oddCount == oddCountInLst2) {
        return "YES";
    } else {
        return "NO";
    }
}
