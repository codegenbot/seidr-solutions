#include <iostream>
#include <ostream>
#include <cmath>

bool iscuber(int a) {
    int root = round(cbrt(abs(a)));
    return a == root * root * root;
}

int main() {
    using namespace std;
    int num;
    cin >> num;
    
    if (iscuber(num)) {
        cout << num << " is a perfect cube." << endl;
    } else {
        cout << num << " is not a perfect cube." << endl;
    }
    
    return 0;
}