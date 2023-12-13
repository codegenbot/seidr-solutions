```
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main() {
    string date;
    getline(cin, date);
    assert(!valid_date(date));
    cout << "All tests passed!" << endl;
    return 0;
}
```