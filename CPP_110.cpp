#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    if (evenCount == lst1.size()) {
        return "YES";
    }
    return "NO";
}

int main() {
    cout << exchange({100, 200}, {200, 200}) << endl;
    return 0;
}