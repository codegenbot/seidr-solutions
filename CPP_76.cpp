```cpp
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    return pow(n, 1.0 / log2(x)) == (int)pow(n, 1.0 / log2(x));
}

int main() {
    assert(is_simple_power(1, 12) == true);
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if(num >= 1 && isSimplePower(num)) {
        cout << num << " is a simple power." << endl;
    } else {
        cout << num << " is not a simple power." << endl;
    }
    
    return 0;
}