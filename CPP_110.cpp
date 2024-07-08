#include <iostream>
#include <vector>
using namespace std;

int exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1.back(), lst2.back());
                    found = true;
                    break;
                }
            }
            if (!found) return 0;
        }
    }
    return 1;
}

int main() {
    vector<int> list1 = {100, 200};
    vector<int> list2 = {200, 200};
    int result = exchange(list1, list2);
    if (result == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;