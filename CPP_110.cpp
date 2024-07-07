string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            even_count++;
    }
    if (even_count == lst1.size())
        return "YES";
    for (int i = 0; i < lst2.size(); i++) {
        int temp = 0;
        bool found = false;
        for (int j = 0; j < lst1.size(); j++) {
            if (lst2[i] % 2 == 0) {
                temp++;
                lst1[j] = lst2[i];
                found = true;
                break;
            }
        }
        if (!found)
            continue;
        while (temp > even_count) {
            for (int k = 0; k < lst1.size(); k++) {
                if (lst1[k] % 2 != 0) {
                    temp--;
                    lst1[k] = lst2[i];
                    break;
                }
            }
        }
    }
    return "NO";
}