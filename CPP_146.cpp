```cpp
#include <iostream>
using namespace std;

int specialFilter(int num) {
    if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n, count = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        count += specialFilter(num);
    }
    cout << "Number of elements that meet the condition: " << count;
    return 0;
}