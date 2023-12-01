#include <string>
#include <cassert>
#include <vector>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    // Test the exchange function
    assert(exchange({1, 3, 5}, {2, 4, 6}) == "YES");
    assert(exchange({2, 4, 6}, {1, 3, 5}) == "YES");
    assert(exchange({2, 4, 6}, {2, 4, 6}) == "NO");

    return 0;
}

string exchange(vector<int> lst1, vector<int> lst2) {
    int count = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            count++;
        }
    }
    if (count == 0) {
        return "YES";
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 == 0) {
            count--;
        }
    }
    if (count <= 0) {
        return "YES";
    }
    return "NO";
}