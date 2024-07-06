#include <string>

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    auto it = find(lst2.begin(), lst2.end(), num2);
                    if (it != lst2.end()) {
                        lst1.pop_back();
                        swap(*it, lst1.back());
                        found = true;
                        break;
                    }
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";