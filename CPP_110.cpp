```cpp
#include <iostream>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) return "NO";
    }
    for (int num : lst2) {
        if (num % 2 != 0) return "NO";
    }
    return "YES";
}

int main() {
    vector<int> lst1 = {100, 200};
    vector<int> lst2 = {200, 200};
    cout << (exchange(lst1, lst2) == "YES" ? "Passed" : "Failed") << endl;
    return 0;
}