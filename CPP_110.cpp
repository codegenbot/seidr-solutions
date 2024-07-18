string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            for (int i = 0; i < lst2.size(); ++i) {
                if (lst2[i] % 2 == 0) {
                    swap(lst1[0], lst2[i]);
                    break;
                }
            }
        }
    }
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}