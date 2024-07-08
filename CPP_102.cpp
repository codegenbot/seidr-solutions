#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    stringstream result;
    string res = "";
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            res += to_string(i) + " ";
    }
    return stoi(res);
}

int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "The biggest even integer is: " << choose_num(x,y) - 1 << endl;
}