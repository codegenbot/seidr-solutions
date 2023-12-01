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
    assert(exchange({100, 200}, {200, 200}) == "YES");
    // Add more test cases here

    return 0;
}