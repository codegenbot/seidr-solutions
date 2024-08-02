#include <algorithm>

string exchange(vector<int> lst1, vector<int> lst2) {
    int odd_count = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            odd_count++;
        }
    }

    if (odd_count > (lst2.size() - odd_count)) {
        return "NO";
    }

    vector<int> new_lst1;
    vector<int> new_lst2;

    for (int i = 0; i < lst2.size(); i++) {
        if (i % 2 == 0) {
            new_lst1.push_back(lst2[i]);
        } else {
            new_lst2.push_back(lst2[i]);
        }
    }

    return "YES";
}