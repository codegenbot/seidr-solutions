#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(const vector<int>& lst1, const vector<int>& lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}