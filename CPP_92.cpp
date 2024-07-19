```cpp
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    ostringstream ss;
    ss << std::to_string(a) << ", " << std::to_string(b) << ", " << std::to_string(c);
    
    if (ss.str().empty())
        cout << "Error: Please enter valid integer values.\n";
    else
        cout << "The numbers are integers: " << ss.str() << "\n";
    
    return 0;
}