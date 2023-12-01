#include <string>
#include <vector>
#include <cassert>

using namespace std;

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

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    assert(exchange({1, 3}, {1, 1, 1}) == "NO");
    assert(exchange({2, 4}, {1, 3}) == "YES");
    return 0;
}