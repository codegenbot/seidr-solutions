#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); ++i) {
        if (lst1[i] % 2 != 0) {
            bool found = false;
            for (int j = 0; j < lst2.size(); ++j) {
                if (lst2[j] % 2 == 0) {
                    swap(lst1[i], lst2[j]);
                    found = true;
                    break;
                }
            }
            if (!found) return "NO";
        }
    }
    return "YES";
}

int main() {
    cout << exchange({100, 200}, {200, 200}) << endl;  // Example test case
    return 0;
}