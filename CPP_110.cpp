string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) { // Check if current element in lst1 is odd
            bool foundOddInLst2 = false;
            for (int j = 0; j < lst2.size(); j++) { // Check if any element in lst2 is odd
                if (lst2[j] % 2 != 0) {
                    swap(lst1[i], lst2[j]);
                    foundOddInLst2 = true;
                    break;
                }
            }
            if (!foundOddInLst2) return "NO"; // If no odd element found in lst2, return "NO"
        }
    }
    return "YES";
}