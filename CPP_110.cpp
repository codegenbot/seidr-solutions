Here is the completed code:

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
        bool found_odd = false;
        for (int num : lst1) {
            if (num % 2 != 0) {
                found_odd = true;
                break;
            }
        }
        if (!found_odd) {
            return "YES";
        } else {
            int odd_count = 0;
            for (int num : lst2) {
                if (num % 2 != 0) {
                    odd_count++;
                }
            }
            if (odd_count == 0) {
                return "YES";
            } else {
                return "NO";
            }
        }
    }
}