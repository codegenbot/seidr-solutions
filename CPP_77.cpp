```cpp
#include <iostream>
using namespace std;

bool iscuber(int a){
    int i = 1;
    while (i * i * i <= a) {
        if (i * i * i == a)
            return true;
        i++;
    }
    return false;
}

int main() {
    assert(iscuber(1729) == false);
    cout << "Write your inputs: ";
    int n;
    cin >> n;
    if(iscuber(n))cout << n << " is a perfect cube.\n";
    else cout << n << " is not a perfect cube.\n";
    return 0;
}