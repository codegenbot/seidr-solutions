#include <string>

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    int index = distance(lst1.begin(), next(find_if(lst1.begin(), lst1.end(), bind(greater<int>(), _1, 0)).base(), lst1.end()));
                    swap(lst1[index], num2);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}