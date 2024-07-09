Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            for (int i = 0; i < lst2.size(); i++) {
                if (lst2[i] % 2 == 0) {
                    swap(lst1[num], lst2[i]);
                    return "YES";
                }
            }
            return "NO";
        }
    }
    return "YES";
}