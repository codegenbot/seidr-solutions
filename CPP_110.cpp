string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        if (num % 2 != 0 && evenCount > 0) {
            evenCount--;
            int temp = num;
            int j = 0;
            while (j < lst2.size()) {
                if (lst2[j] % 2 == 0) {
                    lst2[j] = temp;
                    return "YES";
                }
                j++;
            }
        }
    }
    return "NO";
}