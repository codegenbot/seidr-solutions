string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0) {
            int found = 0;
            for (int j = 0; j < lst1.size(); j++) {
                if (lst2[i] == lst1[j]) {
                    found = 1;
                    lst1.erase(lst1.begin() + j);
                    break;
                }
            }
            if (!found) {
                return "NO";
            }
        }
    }
    return "YES";