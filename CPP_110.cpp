string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    }
    for (int num : lst2) {
        if (num % 2 == 0) {
            int index = -1;
            for (int i = 0; i < lst1.size(); i++) {
                if (lst1[i] % 2 != 0) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                swap(lst1[index], num);
            }
        }
    }
    int newEvenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            newEvenCount++;
        }
    }
    return newEvenCount == lst1.size() ? "YES" : "NO";
}