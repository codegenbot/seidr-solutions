#include <iostream>
#include <vector>
#include <string>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount == 0) {
        return "YES";
    }
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    assert (exchange({100, 200}, {200, 200}) == "YES");

    // Additional test cases
    assert (exchange({1, 3, 5}, {2, 4, 6}) == "NO");
    assert (exchange({2, 4, 6}, {1, 3, 5}) == "YES");

    cout << "All test cases passed!" << endl;
    return 0;
}