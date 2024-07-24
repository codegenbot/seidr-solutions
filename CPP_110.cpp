Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    bool flag = true;
    for (int i : lst1) {
        if (i % 2 != 0) {
            flag = false;
            break;
        }
    }
    if (!flag) {
        return "NO";
    } else {
        for (int i : lst2) {
            bool found = false;
            for (int j : lst1) {
                if (i == j) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            }
        }
    }
    return "YES";
}