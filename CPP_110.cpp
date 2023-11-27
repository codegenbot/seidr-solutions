#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    
    // Add more test cases if necessary
    
    return 0;
}

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
    return "NO";
}