#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    ostringstream ss;
    ss << a << ", " << b << ", " << c;
    
    if(ss.str().size() == 0)
        cout << "Error: Please enter valid integer values.\n";
    else
        cout << "The numbers are integers: " << ss.str() << "\n";
    
    return 0;
}