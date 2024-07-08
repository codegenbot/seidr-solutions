#include <iostream>
#include <vector>
using namespace std;

int exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int i = lst2.size() - 1; !found && i >= 0; --i) {
                if (lst2[i] % 2 == 0) {
                    swap(lst1.back(), lst2[i]);
                    found = true;
                }
            }
            if (!found) return 0;
        }
    }
    return 1;
}

int main() {
    vector<int> lst1 = {1, 3, 4};
    vector<int> lst2 = {2, 4, 6, 8};
    cout << exchange(lst1, lst2);
    return 0;
}