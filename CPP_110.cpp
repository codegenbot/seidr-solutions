string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            evenCount++;
    }
    for (int num : lst1) {
        if (num % 2 != 0 && evenCount > 0) {
            return "YES";
        } else if (num % 2 != 0 && evenCount == 0) {
            return "NO";
        }
        while (!lst2.empty() && num % 2 != 0) {
            if (lst2.back() % 2 == 0) {
                lst1.pop_back();
                lst2.pop_back();
                evenCount++;
                break;
            } else {
                lst2.pop_back();
            }
        }
    }
    return "YES";
}