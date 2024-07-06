string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 != 0) {
                    swap(lst1[lst1.size() - 1], lst2[find(lst2.begin(), lst2.end(), num2) - lst2.begin()]);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}