#include <iostream>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int count = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            count++;
        }
    }
    if (count > lst2.size()) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    assert(exchange({100, 200}, {200, 200}) == "YES");
    return 0;
}