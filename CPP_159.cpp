#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {total, remaining - need};
    }
}

int main() {
    cout << "{11, " << eat(5, 6, 10)[1] << "}" << endl;
    cout << "{12, " << eat(4, 8, 9)[1] << "}" << endl;
    cout << "{11, " << eat(1, 10, 10)[1] << "}" << endl;
    cout << "{7, " << eat(2, 11, 5)[1] << "}" << endl;
    return 0;
}