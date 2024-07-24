#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total - (remaining - 1), 0};
    } else {
        return {total, remaining - total};
    }
}

int main() {
    cout << "{";
    for (auto x : eat(5, 6, 10)) {
        cout << x << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (auto x : eat(4, 8, 9)) {
        cout << x << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (auto x : eat(1, 10, 10)) {
        cout << x << " ";
    }
    cout << "}" << endl;
    cout << "{";
    for (auto x : eat(2, 11, 5)) {
        cout << x << " ";
    }
    cout << "}" << endl;
    return 0;
}