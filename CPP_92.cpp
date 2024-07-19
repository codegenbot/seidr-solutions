```cpp
#include <iostream>
#include <sstream>

using namespace std;

assert(main() == 0);

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    
    if (s1.empty() || s2.empty() || s3.empty())
        cout << "Error: Please enter valid integer values.\n";
    else
        cout << "The numbers are integers: " << a << ", " << b << ", " << c << "\n";
    
    return 0;
}