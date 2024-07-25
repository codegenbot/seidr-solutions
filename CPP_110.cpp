string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount == 0) {
        return "YES";
    } else {
        for (int i = 0; i < lst2.size(); i++) {
            int num = lst2[i];
            bool found = false;
            for (int j = 0; j < lst1.size(); j++) {
                if (num % 2 == 0 && lst1[j] % 2 != 0) {
                    swap(lst1[j], num);
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            }
        }
        return "YES";
    }
}