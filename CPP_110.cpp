Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int i = 0; i < lst2.size(); i++) {
        int count = 0;
        for (int j = 0; j < lst1.size(); j++) {
            if (lst1[j] == lst2[i]) {
                count++;
                lst1.erase(lst1.begin() + j);
                break;
            }
        }
        while (count > 0) {
            count--;
            lst1.push_back(lst2[i]);
        }
    }
    return "YES";
}