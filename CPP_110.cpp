#include <vector>
#include <string>

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1[find(num, lst1)-1], lst2[find(num2, lst2)-1]);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}

int find(int num, vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == num)
            return i;
    }
    return -1;
}