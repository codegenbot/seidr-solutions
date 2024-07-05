#include <iostream>
#include <vector>
#include <string>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int i = 0; i < lst1.size(); ++i) {
        if (lst1[i] % 2 != 0) {
            bool found_even = false;
            for (int j = 0; j < lst2.size(); ++j) {
                if (lst2[j] % 2 == 0) {
                    found_even = true;
                    lst2[j] = -1; // Mark as used
                    break;
                }
            }
            if (!found_even) return "NO";
        }
    }
    return "YES";
}

int main() {
    cout << exchange({100, 200}, {200, 200}) << endl; // Output should be "YES"
    cout << exchange({101, 202}, {200, 200}) << endl; // Output should be "NO"
    return 0;
}