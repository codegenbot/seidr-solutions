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
    vector<int> lst1;
    for (int i : {1, 3, 4}) {
        lst1.push_back(i);
    }
    vector<int> lst2;
    for (int i : {2, 4, 6, 8}) {
        lst2.push_back(i);
    }
    string result = exchange(lst1, lst2);
    if (result == "YES") cout << "YES"; else cout << "NO";
    return 0;
}