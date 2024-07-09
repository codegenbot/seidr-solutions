#include <iostream>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int i = lst2.size() - 1; !found && i >= 0; --i) {
                if (lst2[i] % 2 == 0) {
                    swap(lst1.back(), lst2[i]);
                    found = true;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}

int main() {
    vector<int> lst1 = {1, 3, 4};
    vector<int> lst2 = {2, 4, 6, 8};
    string result = exchange(lst1, lst2);
    if (result == "YES") cout << result; else cout << result;
    return 0;
}