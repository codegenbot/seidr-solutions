string exchange(vector<int> lst1, vector<int> lst2) {
    // count the number of odd elements in lst1
    int oddCount = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    // if lst1 contains only even numbers, return "YES"
    if (oddCount == 0) {
        return "YES";
    }
    
    // count the number of odd elements in lst2
    int oddCount2 = 0;
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0) {
            oddCount2++;
        }
    }
    
    // if lst2 contains only even numbers, return "YES"
    if (oddCount2 == 0) {
        return "YES";
    }
    
    // if both lst1 and lst2 contain odd numbers, return "NO"
    if (oddCount > 0 && oddCount2 > 0) {
        return "NO";
    }
    
    // if lst2 contains even numbers and lst1 contains odd numbers,
    // check if the sum of odd numbers in lst2 is greater than
    // or equal to the sum of odd numbers in lst1
    int sumOdd1 = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            sumOdd1 += lst1[i];
        }
    }
    
    int sumOdd2 = 0;
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0) {
            sumOdd2 += lst2[i];
        }
    }
    
    if (sumOdd2 >= sumOdd1) {
        return "YES";
    } else {
        return "NO";
    }
}