#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    // Check if lst1 already consists of only even numbers
    bool allEven = true;
    for (int num : lst1) {
        if (num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if (allEven) return "YES";
    
    // Check if there's at least one even number in lst2
    for (int num : lst2) {
        if (num % 2 == 0) {
            return "YES";
        }
    }
    
    return "NO";
}

int main() {
    // Test cases
    assert(exchange({100, 200}, {200, 200}) == "YES");
    assert(exchange({101, 201}, {201, 203}) == "NO");
    assert(exchange({102, 204}, {205, 207}) == "YES");
    cout << "All test cases passed!" << endl;
    return 0;
}