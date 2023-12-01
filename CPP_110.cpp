#include <string>
#include <vector>
#include <cassert>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2);

int main() {
    // test cases
    vector<int> lst1 = {1, 3, 5};
    vector<int> lst2 = {2, 4, 6};
    assert(exchange(lst1, lst2) == "YES");

    lst1 = {2, 4, 6};
    lst2 = {1, 3, 5};
    assert(exchange(lst1, lst2) == "YES");

    lst1 = {1, 2, 3};
    lst2 = {4, 5, 6};
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