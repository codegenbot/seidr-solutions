string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    
    // Count the number of odd numbers in lst1
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    
    // If lst1 already contains only even numbers, return "YES"
    if (oddCount == 0) {
        return "YES";
    }
    
    // If there are odd numbers in lst1, check if there are even numbers in lst2
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }
    
    // If there are no even numbers in lst2, return "NO"
    return "NO";
}