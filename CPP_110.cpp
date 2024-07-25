Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int x : lst1) {
        if (x % 2 != 0) {
            int found = false;
            for (int y : lst2) {
                if (y % 2 != 0) {
                    swap(lst1[lst1.size()-lst1.erase(std::find_if(lst1.rbegin(), lst1.rend(),
                            [y](int z) { return z != y; } )->base(), lst1.end()).base()),
                         lst2[std::find(lst2.begin(), lst2.end(), y)]);
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