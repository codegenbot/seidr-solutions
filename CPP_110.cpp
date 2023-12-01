#include <string>
#include <vector>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    // Test the exchange function
    vector<int> lst1 = {1, 2, 3, 4, 5};
    vector<int> lst2 = {6, 7, 8, 9, 10};
    assert(exchange(lst1, lst2) == "YES");

    lst1 = {2, 4, 6, 8, 10};
    lst2 = {1, 3, 5, 7, 9};
    assert(exchange(lst1, lst2) == "YES");

    lst1 = {1, 3, 5, 7, 9};
    lst2 = {2, 4, 6, 8, 10};
    assert(exchange(lst1, lst2) == "NO");

    lst1 = {2, 4, 6, 8, 10};
    lst2 = {2, 4, 6, 8, 10};
    assert(exchange(lst1, lst2) == "NO");

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