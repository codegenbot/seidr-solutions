string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    } else {
        bool possible = false;
        for (int i = 0; i < lst2.size(); i++) {
            if (lst2[i] % 2 == 0) {
                int j = 0;
                while (j < lst1.size() && lst1[j] % 2 != 0) {
                    j++;
                }
                if (j < lst1.size()) {
                    swap(lst1[j], lst2[i]);
                    possible = true;
                    break;
                }
            }
        }
        return possible ? "YES" : "NO";
    }
}