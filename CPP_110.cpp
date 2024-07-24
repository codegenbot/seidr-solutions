Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = 0;
            for (int other_num : lst2) {
                if (other_num == num) {
                    swap(lst1[find(lst1.begin(), lst1.end(), num)], lst2[find(lst2.begin(), lst2.end(), num)]);
                    found = 1;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}