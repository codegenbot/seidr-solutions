```
#include <iostream>
using namespace std;

int main() {
    int cents = 0;
    cin >> cents;
    
    string quartersStr = to_string(cents / 25);
    string dimesStr = to_string((cents % 25) / 10);
    string nicklesStr = to_string((cents % 10) / 5);
    string penniesStr = to_string(cents % 5);
    
    cout << quartersStr << " " << dimesStr << " " << nicklesStr << " " << penniesStr << endl;
    
    return 0;
}
```