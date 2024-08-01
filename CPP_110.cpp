string exchange(vector<int> lst1, vector<int> lst2) {
    bool hasOdd = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            hasOdd = true;
            break;
        }
    }
    if (!hasOdd) {
        return "YES";
    } else {
        for (int num : lst2) {
            if (num % 2 == 0) {
                bool found = false;
                for (int &n : lst1) {
                    if (n % 2 != 0) {
                        n = num;
                        found = true;
                        break;
                    }
                }
                if (!found) return "NO";
            }
        }
    }
    return "YES";
}