#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
}

string exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}