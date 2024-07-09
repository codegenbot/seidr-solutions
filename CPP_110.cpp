Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    int oddCount = lst1.size() - evenCount;
    
    while (oddCount > 0) {
        bool foundOdd = false;
        for (int i = 0; i < lst2.size(); i++) {
            if (lst2[i] % 2 != 0 && !foundOdd) {
                foundOdd = true;
                int temp = lst1[evenCount - 1];
                lst1[evenCount - 1] = lst2[i];
                lst2[i] = temp;
                oddCount--;
            }
        }
    }
    
    for (int num : lst1) {
        if (num % 2 != 0)
            return "NO";
    }
    
    return "YES";
}