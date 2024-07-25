string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }

    if (even_count == lst1.size()) {
        return "YES";
    } else {
        bool possible = false;
        for (int i = 0; i < lst1.size(); i++) {
            for (int j = 0; j < lst2.size(); j++) {
                if (lst1[i] % 2 != 0 && lst2[j] % 2 == 0) {
                    int temp = lst1[i];
                    lst1[i] = lst2[j];
                    lst2[j] = temp;
                    possible = true;
                    break;
                }
            }
            if (possible) {
                break;
            }
        }

        return possible ? "YES" : "NO";
    }
}