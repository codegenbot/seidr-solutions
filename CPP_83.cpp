#include <iostream>
using namespace std;

int starts_one_ends(int n){
    return 2 * 9 * (n - 1) + 10;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}