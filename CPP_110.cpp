string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0)
            return "NO";
    }
    for (auto it = lst1.begin(); it != lst1.end(); ++it) {
        bool found = false;
        for (auto jt = lst2.begin(); jt != lst2.end(); ++jt) {
            if (*it == *jt) {
                *it = *jt; // replace in lst1
                found = true;
                break;
            }
        }
        if (!found)
            return "NO";
    }
    return "YES";
}