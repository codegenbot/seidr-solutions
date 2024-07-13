Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0 && num2 != num) {
                    swap(lst1[std::distance(lst1.begin(), find(lst1.begin(), lst1.end(), num))],
                         lst2[std::distance(lst2.begin(), find(lst2.begin(), lst2.end(), num2))]);
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