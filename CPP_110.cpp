#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    bool allEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if (allEven) return "YES";
    
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }
    
    return "NO";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    assert(exchange({101, 103}, {201, 203}) == "NO");
    assert(exchange({102, 104}, {201, 203}) == "YES");
    cout << "All tests passed!" << endl;
    return 0;
}